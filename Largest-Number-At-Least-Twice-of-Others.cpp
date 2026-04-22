1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        size_t largest_idx, second_largest;
5
6        if(nums[0] > nums[1]) {
7            largest_idx = 0;
8            second_largest = 1;
9        } else {
10            largest_idx = 1;
11            second_largest = 0;
12        }
13
14
15        for( size_t i = 2; i != nums.size(); ++i ) {
16            if( nums[largest_idx] < nums[i] ) {
17                second_largest = largest_idx; 
18                largest_idx = i;
19            } else if ( nums[second_largest] < nums[i] ) {
20                second_largest = i; 
21            }
22        }
23
24
25        return (nums[largest_idx] >= (2 * nums[second_largest])) ? largest_idx : -1;
26    }
27};