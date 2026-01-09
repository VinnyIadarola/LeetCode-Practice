1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<string> binaryTreePaths(TreeNode* root) {
15        vector<string> out;
16        
17        if( root == nullptr ) return out;
18
19        string curr = to_string(root->val);
20
21        if(
22            root->left == nullptr &&
23            root->right == nullptr
24        ) {
25            out.push_back(curr);
26            return out;
27        }
28
29        recursiveHelper(root->left, curr, out);
30        recursiveHelper(root->right, curr, out);
31
32
33        return out;
34
35    }
36
37
38private:
39    void recursiveHelper(TreeNode *root, string curr, vector<string> &out) {
40        if(root == nullptr) return;
41        
42        curr += "->" + to_string(root->val);
43
44        if(
45            root->left == nullptr &&
46            root->right == nullptr
47        ) {
48            out.push_back(curr);
49            return;
50        }
51
52
53        recursiveHelper(root->left, curr, out);
54        recursiveHelper(root->right, curr, out);
55
56    }
57};