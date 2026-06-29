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
14    int low;
15    int high;
16    int rangeSumBST(TreeNode* root, int low_, int high_) {
17        low = low_;
18        high = high_;
19
20      return rangeSumBST(root);
21    }
22
23
24
25    int rangeSumBST(TreeNode* root) {
26        if(root == nullptr)
27            return 0;
28
29         int sum = 0;
30
31        if(root->val < high) {
32            sum += rangeSumBST(root->right);
33        }
34
35        if(low < root->val) {
36            sum += rangeSumBST(root->left);
37        }
38
39        if(low <= root->val && root->val <= high)
40            sum += root->val;
41
42     
43        return sum;
44    }
45
46};