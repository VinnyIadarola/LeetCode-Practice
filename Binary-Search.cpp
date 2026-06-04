1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        size_t low = 0;
5        size_t high = nums.size() - 1;
6
7        while(high - low > 1) {
8            size_t mid = (high - low)/2 + low;
9
10            if(nums[mid] == target) 
11                return mid;
12
13            if(nums[mid] > target) {
14                high = mid - 1;
15            } else {
16                low = mid + 1;
17            }
18        }
19
20        return (nums[low] == target) ? low :
21               (nums[high] == target) ? high : 
22                                        -1 ;
23
24
25
26    }
27};