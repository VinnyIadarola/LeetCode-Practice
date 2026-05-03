1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4        size_t larger_size = (num1.size() > num2.size()) ? num1.size() : num2.size(); 
5
6        string output = "";
7        output.reserve(larger_size + 1); 
8
9        string::reverse_iterator it1 = num1.rbegin();
10        string::reverse_iterator it2 = num2.rbegin();
11
12        bool carry = false;
13        while( (it1 != num1.rend()) || (it2 != num2.rend()) ) {
14            char c1 = (it1 != num1.rend()) ? *(it1++) : '0';
15            char c2 = (it2 != num2.rend()) ? *(it2++) : '0';
16
17            char to_add = (carry) ? c1 + c2 + '1' - ('0' * 2) : c1 + c2 - ('0' * 1);
18
19            carry = to_add > '9';
20            to_add = ((to_add - '0') % 10) + '0';
21            
22            output.push_back(to_add);
23        
24        }
25
26        if(carry) 
27            output.push_back('1');
28
29        std::reverse(output.begin(), output.end());
30        
31        return output; 
32    }
33};