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
 #define MAX_SIZE 100

void traversalHelper(struct TreeNode* root, int* order, int* returnSize)  {
    if(root->left !=NULL) 
        traversalHelper(root->left, order, returnSize);

    order[(*returnSize)++] = root->val;

    if(root->right != NULL)
        traversalHelper(root->right, order, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;

    if(root == NULL) return NULL;


    int* maxArray = malloc(MAX_SIZE*sizeof(int));

    traversalHelper(root, maxArray, returnSize);

    int* returnArr = malloc(*returnSize * sizeof(int));
    for(int i = 0; i < *returnSize; i++)
        returnArr[i] = maxArray[i];
    
    free(maxArray);

    return returnArr;

}

