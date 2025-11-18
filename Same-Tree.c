/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool sameHelper(struct TreeNode* p, struct TreeNode* q) {
    if(!p || !q) return (q == p);
    if(p->val != q->val) return false;

    bool v1 = sameHelper(p->left, q->left);
    bool v2 = sameHelper(p->right, q->right);

    return (v1 && v2);

}


bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    return sameHelper(p, q);
}
