1class Solution {
2public:
3    string reverseVowels(string s) {
4        if(s.empty()) return s;
5        string::iterator forward = s.begin();
6        string::iterator backward = s.end() - 1;
7
8        
9        while(forward < backward) {
10            if(isVowel(forward) && isVowel(backward)) {
11                char temp = *forward;
12                *forward = *backward;
13                *backward = temp;
14                
15                backward--;
16                forward++;
17            } else {
18                backward -= !isVowel(backward);
19                forward += !isVowel(forward);
20            }
21        }
22
23
24        return s;
25
26    }
27
28    private:
29        inline bool isVowel(string::iterator it) {
30            switch(tolower(static_cast<unsigned char>(*it))) {
31                case 'a':
32                case 'e':
33                case 'i':
34                case 'o':
35                case 'u':
36                    return true;
37                default:
38                    return false;
39            }
40        }
41};