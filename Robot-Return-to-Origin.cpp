1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x = 0;
5        int y = 0;
6
7        for(char c : moves) {
8            x += (c == 'R') - (c == 'L');
9            y += (c == 'U') - (c == 'D');
10        }
11
12        return (x == 0) && (y == 0);
13    }
14};