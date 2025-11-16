/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool helper(struct TreeNode* root, int targetSum, int currentSum) {
    if(root == NULL) return false;

    currentSum += root->val;

    if( (currentSum == targetSum) &&
        (root->left == NULL) &&
        (root->right == NULL)
    ) return true;
    


    bool v1 = helper(root->left, targetSum, currentSum);


    bool v2 = helper(root->right, targetSum, currentSum);


    return (v1 || v2);
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(root == NULL) return false;

    if( (root->val == targetSum) &&
        (root->left == NULL) &&
        (root->right == NULL)
    ) return true;

    return (helper(root->left, targetSum, root->val) || helper(root->right, targetSum, root->val));
}