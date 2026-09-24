1class Solution {
2public:
3    bool uniqueOccurrences(std::vector<int>& arr) {
4        unordered_map<int, int> umap;
5
6        for (int num : arr)
7            umap[num]++;
8
9        unordered_set<int> uset;
10
11        for (const auto& pair : umap)
12            uset.insert(pair.second);
13
14        return umap.size() == uset.size();
15    }
16};
17