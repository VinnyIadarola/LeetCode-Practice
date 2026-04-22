1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end(), greater<int>());
5        int pos = nums[0] * nums[1] * nums[2];
6        int neg2 = nums[0] * nums[nums.size() - 1] * nums[nums.size() - 2];
7
8        return (pos > neg2) ? pos : neg2;
9    }
10};