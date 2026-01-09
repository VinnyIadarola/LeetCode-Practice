1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size() + 1;
5        int max = n * (n-1) / 2;
6
7        int sum = 0;
8        for(int num : nums) {
9            sum += num;
10        }
11
12        return max - sum;
13
14
15    }
16};