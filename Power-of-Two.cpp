1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        if (n <= 0) return false;
5        return !(n & (n - 1));
6    }
7};