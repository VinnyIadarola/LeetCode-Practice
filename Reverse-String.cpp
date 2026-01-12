1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        if(s.empty()) return;
5        vector<char>::iterator forward = s.begin();
6        vector<char>::iterator backward = s.end() - 1;
7
8
9        while(backward > forward) {
10            char temp = *forward;
11            *forward = *backward;
12            *backward = temp;
13
14            --backward;
15            ++forward;
16        }
17    }
18};