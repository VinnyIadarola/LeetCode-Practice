1class Solution {
2public:
3    vector<string> findWords(vector<string>& words) {
4        static const unordered_map<char, size_t> hash 
5            {
6                { 'q', 1 }, 
7                { 'w', 1 }, 
8                { 'e', 1 }, 
9                { 'r', 1 }, 
10                { 't', 1 }, 
11                { 'y', 1 }, 
12                { 'u', 1 }, 
13                { 'i', 1 }, 
14                { 'o', 1 }, 
15                { 'p', 1 }, 
16            
17                {'a', 2},
18                {'s', 2},
19                {'d', 2},
20                {'f', 2},
21                {'g', 2},
22                {'h', 2},
23                {'j', 2},
24                {'k', 2},
25                {'l', 2},
26
27                {'z', 0},
28                {'x', 0},
29                {'c', 0},
30                {'v', 0},
31                {'b', 0},
32                {'n', 0},
33                {'m', 0}
34            };
35
36
37            for(auto it = words.begin(); it != words.end(); ++it) {
38                string &word = *it;
39                size_t bucket = hash.at(static_cast<char>(tolower(word[0])));
40
41                for(char c : word) {
42
43                    if(bucket !=  hash.at(static_cast<char>(tolower(c)))){
44                        it = words.erase(it);
45                        it--;
46                        break;
47                    }
48                }
49
50
51            }
52
53            return words;
54
55        }
56
57};