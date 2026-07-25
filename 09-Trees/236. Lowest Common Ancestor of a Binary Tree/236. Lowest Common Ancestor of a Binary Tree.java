1/**
2 * Definition for a binary tree node.
3 * public class TreeNode {
4 *     int val;
5 *     TreeNode left;
6 *     TreeNode right;
7 *     TreeNode(int x) { val = x; }
8 * }
9 */
10class Solution {
11    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
12
13        if (root == null || root == p || root == q) {
14            return root;
15        }
16
17        TreeNode left = lowestCommonAncestor(root.left, p, q);
18        TreeNode right = lowestCommonAncestor(root.right, p, q);
19
20        if (left == null) {
21            return right;
22        } else if (right == null) {
23            return left;
24        } else {
25            return root;
26        }
27    }
28}