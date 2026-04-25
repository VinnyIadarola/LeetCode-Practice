1class Solution {
2public:
3    bool hasAlternatingBits(int n) {
4
5        while(n > 0) {
6 
7            if( ((n & 0b10) >> 1) == (n & 0b1) )
8                return false;
9            
10            n >>= 1;
11        }
12
13
14        return true;
15    }
16};