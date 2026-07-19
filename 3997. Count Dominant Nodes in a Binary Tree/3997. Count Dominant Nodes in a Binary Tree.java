1class Solution {
2
3    int count = 0;
4
5    // inorder traversal
6    int dfs(TreeNode root) {
7        if (root == null)
8            return Integer.MIN_VALUE;
9
10        int leftMax = dfs(root.left);
11        int rightMax = dfs(root.right);
12
13        int currentMax = Math.max(root.val, Math.max(leftMax, rightMax));
14
15        if (currentMax == root.val)
16            count++;
17
18        return currentMax;
19    }
20
21    public int countDominantNodes(TreeNode root) {
22        dfs(root);
23        return count;
24    }
25}