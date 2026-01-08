1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        unordered_map<char, int> ms1;
5        unordered_map<char, int> ms2;
6
7
8        for(char c : s) 
9            ++ms1[c];
10        
11            
12
13        for(char c : t) 
14            ++ms2[c];
15
16
17        if(ms1.size() != ms2.size()) return false;
18
19        for(char c : s) {
20           if(ms1[c] != ms2[c]) return false;
21        }
22
23        return true;
24
25    }
26};