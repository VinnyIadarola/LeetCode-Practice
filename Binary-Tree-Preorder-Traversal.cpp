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
13private:
14    void preorderTraversalHelper(TreeNode *root, vector<int> &out_buffer) {
15        if(!root) return;
16
17        out_buffer.push_back(root->val);
18
19        preorderTraversalHelper(root->left, out_buffer);
20        preorderTraversalHelper(root->right, out_buffer);
21    }
22
23public:
24    vector<int> preorderTraversal(TreeNode* root) {
25        if(!root) return std::vector<int>();
26
27        std::vector<int> out_buffer;
28        out_buffer.reserve(100);
29
30
31        preorderTraversalHelper(root, out_buffer);
32        return std::vector<int>(out_buffer);
33    }
34};