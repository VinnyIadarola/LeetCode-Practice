/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void helper(struct TreeNode* root, int* returnSize, int* output) {
    if(!root) return;


    helper(root->left, returnSize, output);

    helper(root->right, returnSize, output);


    output[(*returnSize)++] = root->val;


}


int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if(!root) return NULL;

    int* output = malloc(100*sizeof(int));

    helper(root, returnSize, output);
    return output;
}