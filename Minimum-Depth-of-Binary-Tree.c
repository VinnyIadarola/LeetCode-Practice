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

    int depth1 = minDepthHelper(root->left) + 1; 
    int depth2 = minDepthHelper(root->right) + 1;

    if(depth1 == 1) return depth2;
    if(depth2 == 1) return depth1;
    return (depth1 > depth2) ? (depth2) : (depth1);
    

}

int minDepth(struct TreeNode* root) {
    return minDepthHelper(root);   
}