1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        std::string output = "";
5        while(columnNumber) {
6        
7            output += ((columnNumber - 1) % 26) + 'A';
8            columnNumber = ((columnNumber - 1) / 26);
9        }
10
11
12        std::reverse(output.begin(), output.end());
13        return output;
14    }
15};