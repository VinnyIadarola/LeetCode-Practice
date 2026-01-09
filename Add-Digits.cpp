1class Solution {
2public:
3    int addDigits(int num) {
4        while( num >= 10 ) {
5            num = adddigs(num);
6        }
7
8        return num;
9    }
10
11
12private: 
13    int adddigs(int num) {
14        int sum = 0;
15        while(num != 0) {
16            sum += num % 10;
17            num /= 10;
18        }
19
20        return sum;
21    }
22};