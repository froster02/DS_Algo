1class Solution {
2public:
3    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2,
4                                   vector<int>& arr3) {
5        int n1 = arr1.size();
6        int n2 = arr2.size();
7        int n3 = arr3.size();
8
9        vector<int> ans;
10
11        int i = 0, j = 0, k = 0;
12
13        while (i < n1 and j < n2 and k < n3) {
14            if (arr1[i] == arr2[j] and arr2[j] == arr3[k]) {
15                ans.push_back(arr1[i]);
16                i++, j++, k++;
17            } else {
18                int mn = min({arr1[i], arr2[j], arr3[k]});
19
20                if (arr1[i] == mn)
21                    i++;
22                if (arr2[j] == mn)
23                    j++;
24                if (arr3[k] == mn)
25                    k++;
26            }
27        }
28
29        return ans;
30    }
31};