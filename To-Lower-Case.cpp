1class Solution {
2public:
3    string toLowerCase(string s) {
4        for(size_t i = 0; i != s.size(); ++i) {
5            bool is_capital = ('A' <= s[i]) && (s[i] <= 'Z');
6
7
8            if(is_capital)
9                s[i] = s[i] -  'A' + 'a';
10
11        }
12
13        return s;
14    }
15};