1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        size_t odd_ptr = 0;
5        
6
7        for(size_t lead_ptr = 0; lead_ptr != nums.size(); ++lead_ptr) {
8            if(odd_ptr == lead_ptr)
9                continue;
10
11            while(nums[odd_ptr] % 2 != 1) {
12                odd_ptr++;
13                if(odd_ptr >= lead_ptr) {
14                    break;
15                    odd_ptr = lead_ptr;
16                }
17            }
18
19            if(odd_ptr == lead_ptr)
20                continue;
21
22            if(nums[lead_ptr] % 2 == 0) {
23                int temp = nums[lead_ptr];
24                nums[lead_ptr] = nums[odd_ptr];
25                nums[odd_ptr] = temp;
26                ++odd_ptr;
27            }
28        }
29
30        return nums;
31
32
33    }
34};