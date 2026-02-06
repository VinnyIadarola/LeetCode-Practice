1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int countNodes(TreeNode* root) {
15        return recursiveCounter(root);
16    }
17
18
19    int recursiveCounter(TreeNode *root) {
20        if(root == nullptr) return 0;
21
22        return 1 + recursiveCounter(root->left) + recursiveCounter(root->right);
23    }
24};