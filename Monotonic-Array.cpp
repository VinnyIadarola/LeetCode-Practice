1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool isIncreasing = true;
5        bool isDecreasing = true;
6
7        for( size_t i = 1; i != nums.size(); ++i ) {
8            if(nums[i - 1] < nums[i]) 
9                isIncreasing = false;
10
11            if(nums[i - 1] > nums[i]) 
12                isDecreasing = false;
13        }
14
15        return isDecreasing || isIncreasing;
16    }
17};