/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepthHelper(struct TreeNode* root) {
    if(!root) return 0;

    int depth1 = minDepthHelper(root->left); 
    int depth2 = minDepthHelper(root->right);

    if(depth1 == 0) return depth2 + 1;
    if(depth2 == 0) return depth1 + 1;
    return (depth1 > depth2) ? (depth2 + 1) : (depth1 + 1);
    

}

int minDepth(struct TreeNode* root) {
    return minDepthHelper(root);   
}