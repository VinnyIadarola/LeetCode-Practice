1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char, char> s_map;
5        unordered_map<char, char> t_map;
6
7
8
9        for(size_t i = 0; i != s.size(); ++i) {
10            auto it = s_map.find(s[i]);
11            
12            
13            if(it != s_map.end() && it->second != t[i]) {
14                return false;
15            }
16
17            s_map[s[i]] = t[i];
18
19
20            it = t_map.find(t[i]);
21            if(it != t_map.end() && it->second != s[i]) {
22                return false;
23            }
24
25
26            t_map[t[i]] = s[i];
27
28
29        }
30
31
32        return true;
33
34    }
35};