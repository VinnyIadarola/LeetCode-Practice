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
void helper(struct TreeNode* root, int*returnSize, int* order) {
    if(!root) return;

    order[(*returnSize)++] = root->val;


    helper(root->left, returnSize, order);

    helper(root->right, returnSize, order);


}


int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if(!root) return NULL;


    int* order = malloc(100*sizeof(int));
    helper(root, returnSize, order);
    return order;
}