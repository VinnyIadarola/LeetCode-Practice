1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        
5        std::vector<int>::const_iterator off_beginning = digits.begin() - 1;
6 
7
8        bool carry = true;
9        for(
10            std::vector<int>::iterator it = digits.end() - 1; 
11            it != off_beginning;
12            --it
13        ) {
14            *it += (carry) ? 1 : 0;
15            carry = (*it == 10);
16            *it %= 10; 
17        }
18        if(carry) digits.insert(digits.begin(), 1);
19        return digits;
20
21
22
23    }
24};