1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        if(s == t) return true;
5        std::string::const_iterator it = s.cbegin();
6
7        for( char &c : t ) {
8            if(*it == c) it++;
9
10            if(it == s.cend()) return true;
11        }
12
13        return false;
14    }
15};