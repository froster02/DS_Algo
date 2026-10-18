1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        unordered_map<int, int> freqMap;
7
8        // create frequence map
9        for (auto itr : nums) {
10            freqMap[itr]++;
11        }
12
13        // create VectorPair
14        vector<pair<int, int>> freqPair;
15        for (auto itr : freqMap) {
16            freqPair.push_back({itr.second, itr.first});
17        }
18
19        sort(freqPair.begin(), freqPair.end(), greater<pair<int, int>>());
20
21        vector<int> result;
22        for (int i = 0; i < k; i++) {
23            result.push_back(freqPair[i].second);
24        }
25
26        return result;
27    }
28};