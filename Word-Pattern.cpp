1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4        unordered_map<string, char> mp1;
5        unordered_map<char, string> mp2;
6
7        istringstream in = istringstream(s);
8
9        for( char c : pattern ) {
10            string word;
11            if(in.eof()) return false;
12            in >> word; // should check we dont crash or get bad
13
14            auto search1 = mp1.find(word);
15            if( 
16                search1 != mp1.end() &&
17                search1->second != c
18            ) return false;
19
20            auto search2 = mp2.find(c);
21            if( 
22                search2 != mp2.end() &&
23                search2->second != word
24            ) return false;
25
26        
27            mp1.emplace(pair<string, char>(word, c));
28            mp2.emplace(pair<char, string>(c, word));
29
30        }
31
32        if(!in.eof()) return false;
33
34        return true;
35    }
36};