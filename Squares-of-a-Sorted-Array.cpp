1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int neg_idx = -1;
5        
6        for(size_t i = 0; i != nums.size(); ++i) {
7            if(nums[i] < 0) {
8                neg_idx = i;
9            }
10
11            nums[i] *= nums[i];
12        }
13
14
15        int pos_idx = neg_idx + 1; 
16        std::vector<int> output; 
17        output.reserve(nums.size());
18        while(pos_idx - neg_idx != nums.size() + 1) {
19            int num2add = (pos_idx == nums.size() || (neg_idx >= 0 && nums[neg_idx] < nums[pos_idx])) ? nums[neg_idx--] : nums[pos_idx++];
20            output.push_back(num2add);
21        }
22
23
24        return output;
25
26    }
27};