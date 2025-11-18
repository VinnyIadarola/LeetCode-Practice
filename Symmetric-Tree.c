/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool symmetryHelper(struct TreeNode* l, struct TreeNode* r){
    if(!l || !r) return (l == r);
    if(l->val != r->val) return false;


    bool v1 = symmetryHelper(l->left, r->right);
    bool v2 = symmetryHelper(l->right, r->left);

    return v1 && v2;
}

bool isSymmetric(struct TreeNode* root) {
    if(!root) return true;

    return symmetryHelper(root->left, root->right);
}