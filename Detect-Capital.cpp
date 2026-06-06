1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        size_t char_count = 0;
5        
6        for(char c : word) {
7            char_count += (isupper(c)) ? 1 : 0;
8        }
9
10        bool only_first = (char_count == 1) && isupper(word[0]);
11        return only_first || (char_count == word.size()) || (char_count == 0);
12
13
14    }
15};