1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        int n = intervals.size();
5
6        sort(intervals.begin(), intervals.end());
7
8        vector<vector<int>> ans;
9
10        for (int i = 0; i < n; i++) {
11            int start = intervals[i][0];
12            int end = intervals[i][1];
13
14            while (i + 1 < n and end >= intervals[i + 1][0]) {
15                end = max(end, intervals[i + 1][1]);
16                i++;
17            }
18
19            ans.push_back({start, end});
20        }
21
22        return ans;
23    }
24};