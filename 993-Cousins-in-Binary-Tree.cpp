/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int x, y;
    TreeNode* first_parent = nullptr;
    int first_depth = -1;



    bool isCousins(TreeNode* root, int x_, int y_) {
        x = x_;
        y = y_;

        return isCousins(root, 0, nullptr);
    }



    bool isCousins(TreeNode* root, int depth, TreeNode* parent) {
        if(root == nullptr)
            return false;

        if(root->val == x || root->val == y) {
            if(first_depth == -1) {
                first_depth = depth;
                first_parent = parent;
                return false;
            }

            return (depth == first_depth) && (parent != first_parent);
        }        


        depth++;

        if(first_depth != -1 && depth > first_depth)
            return false;

        bool left = isCousins(root->left, depth, root);
        bool right = isCousins(root->right, depth, root);

        return left || right;
        
    }

};