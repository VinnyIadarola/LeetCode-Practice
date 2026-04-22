1class Solution {
2private:
3    inline void standardizeAndCount(int (&hash)[26], string &word) {
4    
5
6        for(char c : word) {
7            if(isdigit(c) || c == ' ')
8                    continue;
9
10            ++hash[tolower(c) - 'a'];
11        }
12
13
14
15    }    
16    
17public:
18    string shortestCompletingWord(string licensePlate, vector<string>& words) {
19            int hash[26];
20            size_t smallest = -1;
21            standardizeAndCount(hash, licensePlate);
22
23            for(size_t k = 0; k < words.size(); ++k) {
24
25
26                int replacements[26] = {0};
27
28                
29                standardizeAndCount(replacements, words[k]);
30
31
32                bool valid = true;
33                for(size_t i = 0; i < 26; ++i) {
34                    if(replacements[i] < hash[i]) {
35                        valid = false;
36                        break;
37                    }
38                }
39
40                if(valid) {
41                    if(smallest == -1 || words[k].size() < words[smallest].size() ) {
42                        smallest = k;
43                    }
44                }
45
46                
47
48            }
49
50            return (smallest != -1) ?  words[smallest] : "";
51
52        
53        }
54};