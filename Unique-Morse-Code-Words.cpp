1
2class Solution {
3public:
4    int uniqueMorseRepresentations(vector<string>& words) {
5        string transforms[26] = {
6            ".-","-...","-.-.","-..",".","..-.","--.","....",
7            "..",".---","-.-",".-..","--","-.","---",".--.",
8            "--.-",".-.","...","-","..-","...-",".--","-..-",
9            "-.--","--.."
10        };
11
12        std::unordered_set<string> unique_words;
13        unique_words.reserve(words.size());
14        for(string &word : words) {
15            string output;
16            output.reserve(word.size() * 3);
17
18            for(char c : word) {
19                output += transforms[c - 'a'];
20            }
21            
22            unique_words.insert(output);
23        }
24
25        return unique_words.size();
26    
27    
28    
29    
30    }
31};