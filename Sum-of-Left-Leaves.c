/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sumOfLeftHelper(struct TreeNode* root, bool isLeftChild) {
    if(!root) return 0;
    if( !root->left && 
        !root->right &&
        isLeftChild
    ) return root->val;


    int sum1 = sumOfLeftHelper(root->left, true);
    int sum2 = sumOfLeftHelper(root->right, false);

    return sum1 + sum2;
}   

int sumOfLeftLeaves(struct TreeNode* root) {
    return sumOfLeftHelper(root, false);
}