/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepthHelper(struct TreeNode* root) {
    if(!root) return 0;

    int sum1 = maxDepthHelper(root->left);
    int sum2 = maxDepthHelper(root->right);

    return ( (sum1 > sum2) ? sum1 : sum2 ) + 1;

}


int maxDepth(struct TreeNode* root) {
    return maxDepthHelper(root);
}