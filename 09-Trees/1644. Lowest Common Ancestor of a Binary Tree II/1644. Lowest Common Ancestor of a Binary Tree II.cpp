1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11    bool foundP = false;
12    bool foundQ = false;
13
14    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q) {
15        if (root == NULL)
16            return NULL;
17
18        // Traverse children first (post-order)
19        TreeNode* left = dfs(root->left, p, q);
20        TreeNode* right = dfs(root->right, p, q);
21
22        // Mark existence flags
23        if (root == p) {
24            foundP = true;
25            return root;
26        }
27        if (root == q) {
28            foundQ = true;
29            return root;
30        }
31
32        // Standard LCA logic
33        if (left != NULL && right != NULL)
34            return root;
35        if (left != NULL)
36            return left;
37        if (right != NULL)
38            return right;
39
40        return NULL;
41    }
42
43public:
44    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
45        TreeNode* lca = dfs(root, p, q);
46
47        // Only return the LCA if both nodes were found in the tree
48        if (foundP && foundQ)
49            return lca;
50        return NULL;
51    }
52};