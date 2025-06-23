/*
Problem: https://leetcode.com/problems/maximum-depth-of-binary-tree

Description: Given the root of a binary tree, return its maximum depth.

Approach: If the root is empty, return 0. Else the depth is 1 + the maximum depth of its left and right trees

Time Complexity: O(n)
Space Complexity: O(h)
*/

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}