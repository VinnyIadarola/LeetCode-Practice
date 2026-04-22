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
14    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
15        helper(&root1, &root2);
16        return root1;
17    }
18
19private:
20    void helper(TreeNode** root1, TreeNode** root2) {
21        if( !*root2 ) 
22            return;
23        
24        if( !*root1 ) {
25            *root1 = *root2;
26            return;
27        } else {
28            (*root1)->val += (*root2)->val;
29        }
30
31        helper(&(*root1)->left, &(*root2)->left);
32        helper(&(*root1)->right, &(*root2)->right);
33    }
34
35};