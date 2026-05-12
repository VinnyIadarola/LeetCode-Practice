1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.size() != goal.size()) return false;
5
6
7        auto it = goal.begin();
8        while(it != goal.end()) {
9
10            auto match = std::find(it, goal.end(), s[0]);
11            if(match == goal.end()) return false;
12
13            size_t shift = goal.end() - match;
14            
15            bool valid = true;
16            for(size_t i = 0; i != s.size(); i++) {
17                int shifted_idx = (shift + i) % s.size(); 
18                if(s[shifted_idx] != goal[i]) {
19                    valid = false;
20                    break;
21                }
22            }
23            if(valid) return true;
24            it = ++match;
25        }
26
27        return false;
28    }
29};