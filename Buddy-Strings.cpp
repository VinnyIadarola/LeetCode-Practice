1class Solution {
2public:
3    bool buddyStrings(string s, string goal) {
4        if (s.size() != goal.size())
5            return false;
6
7        int hash[26] = {0};
8
9        size_t diff_idx = -1;
10        bool valid = false;
11
12        for( size_t i = 0; i != s.size(); i++ ) {
13            if( s[i] == goal[i] ) {
14                ++hash[s[i] - 'a'];
15                continue;
16            }
17
18            if(diff_idx == -1) {
19                diff_idx = i;
20                continue;
21            }
22
23            if(valid) 
24                return false;
25            
26            if( (s[diff_idx] != goal[i]) || (s[i] != goal[diff_idx]) ) 
27                return false;
28
29            valid = true;
30        }
31
32        if(valid)
33            return true;
34
35        if(diff_idx != -1)
36            return false;
37
38        for(int num : hash) {
39            if(num > 1)
40                return true;
41        }
42        return false;
43        
44    }
45};