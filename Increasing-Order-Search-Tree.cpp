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
14    TreeNode* increasingBST(TreeNode* root) {
15        vector<TreeNode*> output;
16        output.reserve(100);
17        helper(root, output);
18
19        for(size_t i = 1; i != output.size(); ++i) {
20            output[i - 1]->left = nullptr;
21            output[i - 1]->right = output[i];
22        }
23
24        output[output.size() - 1]->left = nullptr;
25        output[output.size() - 1]->right = nullptr;
26
27        return output[0];
28
29    }
30
31private:
32    void helper(TreeNode* root, vector<TreeNode*> &output) {
33        if(root == nullptr)
34            return;
35
36        helper(root->left, output);
37        output.push_back(root);
38        helper(root->right, output);
39    }
40};