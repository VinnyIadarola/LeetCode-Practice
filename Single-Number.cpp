1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int x = 0;
5        for( int &n : nums) x ^= n;
6        return x;
7    }
8};