1class Solution {
2public:
3    string reverseVowels(string s) {
4        if(s.empty()) return s;
5        string::iterator forward = s.begin();
6        string::iterator backward = s.end() - 1;
7
8        
9        while(forward < backward) {
10            if(isVowel(*forward) && isVowel(*backward)) {
11                char temp = *forward;
12                *forward = *backward;
13                *backward = temp;
14                
15                backward--;
16                forward++;
17            } else {
18                backward -= !isVowel(*backward);
19                forward += !isVowel(*forward);
20            }
21        }
22
23
24        return s;
25
26    }
27
28    private:
29        inline bool isVowel(char c_) {
30            unsigned char c = tolower(static_cast<unsigned char>(c_));
31            return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i');
32        }
33};