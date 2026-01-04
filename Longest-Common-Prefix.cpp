1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if(strs.empty()) return "";
5
6        std::string &longest = strs[0];
7
8
9        for(std::string &str : strs) {
10            while( longest != str ) {
11                if( longest.length() > str.length() ) {
12                    if(longest.empty())
13                        return "";
14
15                    longest.pop_back();
16                }
17                else {
18                    if(str.empty()) 
19                        return "";
20
21                    str.pop_back();   
22                }
23            }
24        }
25
26        return longest;
27
28
29
30
31    }
32
33
34};