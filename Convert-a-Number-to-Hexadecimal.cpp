1class Solution {
2public:
3    string toHex(int num) {
4        string result;
5
6        unsigned int mun = 0;
7        memcpy(&mun, &num, sizeof mun);
8
9        while(mun > 15) {
10            int rem = mun % 16;
11            char c = (rem < 10) ? static_cast<char>(rem + '0') : static_cast<char>('a' + rem - 10);
12            result.push_back(c);
13
14            mun /= 16;
15        }
16
17
18        int rem = mun % 16;
19        char c = (rem < 10) ? static_cast<char>(rem + '0') : static_cast<char>('a' + rem - 10);
20        result.push_back(c);
21
22
23        reverse(result.begin(), result.end());
24        return result;
25    }
26};