1class Solution {
2public:
3    string convertToBase7(int num) {
4        string out = (num < 0) ? "-" : "";
5
6
7        num = abs(num);
8
9        int largest7 = 1;
10
11        while((largest7 * 7)  <= num) {
12            largest7 *= 7;
13        }
14
15
16        out.reserve(largest7/7 + 1);
17
18        while(num != 0) {
19            out += to_string(num / largest7);
20            num %= largest7;
21
22            largest7 /= 7 ;
23        }
24
25        while(largest7 != 0) {
26            out += "0";
27            largest7 /=7;
28        }
29
30        return out;
31    }
32};