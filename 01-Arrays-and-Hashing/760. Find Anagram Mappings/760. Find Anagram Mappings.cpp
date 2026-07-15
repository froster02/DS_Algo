1class Solution {
2public:
3    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
4        int n = nums1.size();
5        
6        unordered_map<int, int> umap;
7
8        for(int i = 0; i < n; i++){
9            umap[nums2[i]] = i;
10            // umap[nums2[i]] = i;
11            // umap[nums2[0]] = 0;
12            // umap[50] = 0;
13            // umap {50, 0};
14        }
15
16        vector<int> ans; 
17        for(int i = 0; i < n; i++){
18            ans.push_back(umap[nums1[i]]);
19        }
20
21        return ans;
22    }
23};