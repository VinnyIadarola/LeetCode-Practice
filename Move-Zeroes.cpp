1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        auto it = remove(nums.begin(), nums.end(), 0);
5
6
7        for(; it != nums.end(); it++) {
8            *it = 0;
9        }
10
11
12    }
13};