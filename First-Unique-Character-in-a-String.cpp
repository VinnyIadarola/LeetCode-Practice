1class Solution {
2public:
3    int firstUniqChar(string s) {
4        int abc[26] = {0};
5
6
7        for( size_t i = 0; i < s.size(); i++ ) {
8            abc[ s[i] - 'a' ]++;
9        }
10
11        for( size_t i = 0; i < s.size(); i++ ) {
12            if( abc[ s[i] - 'a' ] == 1 )
13                return i;
14        }
15        
16        return -1;
17    }
18};