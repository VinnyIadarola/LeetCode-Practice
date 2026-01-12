1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n <= 0) return false;
5        
6        const int pow4s = 0b01010101010101010101010101010101;
7        if( ((n & pow4s) == 0) ) return false; 
8
9        return  ((n & (n - 1)) == 0);
10    }
11};