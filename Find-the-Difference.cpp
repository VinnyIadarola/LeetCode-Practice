1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        int sum = 0;
5        for(size_t i = 0; i < s.size(); i++) {
6            sum += t[i] - s[i];
7        }
8
9        return static_cast<char>(sum + t.back());
10    }
11};