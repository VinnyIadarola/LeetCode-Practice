1class Solution {
2public:
3    bool isUgly(int n) {
4        if( n <= 0 ) return false;
5        if( n == 1 ) return true;
6
7
8        while( n != 1 ) {
9            bool divided = false;
10
11            if( n % 2 == 0 ){
12                divided = true;
13                n /= 2;
14            }
15
16            if( n % 3 == 0 ) {
17                divided = true;
18                n /= 3;
19            }
20
21            if( n % 5 == 0 ) {
22                divided = true;
23                n /= 5;
24            }
25
26            if(!divided) return false;
27        }
28
29        return true;
30
31    }
32};