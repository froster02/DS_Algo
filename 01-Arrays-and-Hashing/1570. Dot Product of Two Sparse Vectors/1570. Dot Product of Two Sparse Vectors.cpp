1class SparseVector {
2public:
3    vector<pair<int, int>> v;
4
5    SparseVector(vector<int>& nums) {
6
7        int n = nums.size();
8
9        for (int i = 0; i < n; i++) {
10            if (nums[i] != 0) {
11                v.push_back({i, nums[i]});
12            }
13        }
14    }
15
16    int dotProduct(SparseVector& vec) {
17
18        int ans = 0;
19
20        int i = 0, j = 0;
21
22        while (i < v.size() && j < vec.v.size()) {
23
24            if (v[i].first == vec.v[j].first) {
25                ans += v[i].second * vec.v[j].second;
26                i++;
27                j++;
28            } else if (v[i].first < vec.v[j].first) {
29                i++;
30            } else {
31                j++;
32            }
33        }
34
35        return ans;
36    }
37};