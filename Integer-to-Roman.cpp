1class Solution {
2public:
3    string intToRoman(int num) {
4        constexpr static pair<int, const char*> conversion_table[] = {
5            {1000, "M"},
6            {900,  "CM"},
7            {500,  "D"},
8            {400,  "CD"},
9            {100,  "C"},
10            {90,   "XC"},
11            {50,   "L"},
12            {40,   "XL"},
13            {10,   "X"},
14            {9,    "IX"},
15            {5,    "V"},
16            {4,    "IV"},
17            {1,    "I"}
18        };
19        constexpr static int table_length = sizeof(conversion_table) / sizeof(conversion_table[0]);
20
21
22
23        string output = "";
24        output.reserve(15);
25
26
27        for(size_t i = 0; i != table_length; /*NULL*/) {
28            while(conversion_table[i].first > num) {
29                i++;
30                if(i == table_length)
31                    return output;
32            }
33
34            output.append(conversion_table[i].second);
35            num -= conversion_table[i].first;
36        }
37
38
39
40        return output;
41    }
42};