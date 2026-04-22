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
13
14public:
15    vector<double> averageOfLevels(TreeNode* root) {
16        vector<pair<long, int>> sum_and_count;
17
18
19        averageHelper(root, 0, sum_and_count);
20
21        vector<double> avgs;
22        avgs.reserve(sum_and_count.size());
23        
24        for(auto i = 0; i != sum_and_count.size(); ++i) {
25            avgs.push_back( (double)sum_and_count[i].first / sum_and_count[i].second);
26        }  
27
28        return avgs;
29
30    }
31
32
33private:
34    void averageHelper(TreeNode* root, int currentDepth, vector<pair<long, int>> &sum_and_count) {
35        if(!root) return;
36
37        if(currentDepth == sum_and_count.size()) {
38            sum_and_count.push_back({0, 0});
39        }
40
41        sum_and_count[currentDepth].first += root->val;
42        sum_and_count[currentDepth].second += 1; 
43
44        ++currentDepth;
45
46        averageHelper(root->left, currentDepth, sum_and_count);
47        averageHelper(root->right, currentDepth, sum_and_count);
48
49
50
51
52
53    }   
54};