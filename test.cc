class NumArray
{
public:
    vector<int> a;
    vector<int> tree;
    NumArray(vector<int> &nums) {
        int n = nums.size();
        int segment_size = 2 * pow(2, ceil(log2(n))) - 1;
        tree.resize(segment_size);
        a = nums;
        build_tree(0, nums.size() - 1, 0);
    }
    void build_tree(int l, int r, int index)
    {
        if (l == r) {
            tree[index] = a[r];
            return;
        }
        int mid = l + (r - l) / 2;
        build_tree(l, mid, 2 * index + 1);
        build_tree(mid + 1, r, 2 * index + 2);
        tree[index] = tree[2 * index + 1] + tree[2 * index + 2];
    }
    void update(int index, int val) {
        update_util(0, a.size() - 1, 0, index, val);
    }
    void update_util(int l, int r, int i, int index, int val) {
        if (l == r && r == index) {
            tree[i] = val;
            a[index] = val;
            return;
        }
        int mid = l + (r - l) / 2;
        if (index <= mid)
            update_util(l, mid, 2 * i + 1, index, val);
        else
            update_util(mid + 1, r, 2 * i + 2, index, val);
        tree[i] = tree[2 * i + 1] + tree[2 * i + 2];
    }
    int sumRange(int left, int right)
    {
        return sum_find(0, a.size() - 1, 0, left, right);
    }
    int sum_find(int s, int e, int i, int ql, int qr)
    {
        if (s > qr || e < ql)
            return 0;
        else if (s >= ql && e <= qr)
            return tree[i];
        int mid = s + (e - s) / 2;
        return (sum_find(s, mid, 2 * i + 1, ql, qr) + sum_find(mid + 1, e, 2 * i + 2, ql, qr));
    }
};