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
14    int truth;
15
16    bool isUnivalTree(TreeNode* root) {
17        truth = root->val;
18
19        return helper(root);
20
21
22    }
23
24    bool helper(TreeNode* root) {
25        if(root == nullptr)
26            return true;
27
28        
29        return (root->val == truth) && helper(root->left) && helper(root->right);
30
31
32
33    }
34
35};