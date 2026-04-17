1class Solution {
2public:
3    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
4        if(rec1 == rec2) return true;
5
6        bool  is_left_in1 = (rec1[0] < rec2[0]) && (rec2[0] < rec1[2]);
7        bool  is_bot_in1 = (rec1[1] < rec2[1]) && (rec2[1] < rec1[3]);
8        bool  is_right_in1 = (rec1[0] < rec2[2]) && (rec2[2] < rec1[2]);
9        bool  is_top_in1 = (rec1[1] < rec2[3]) && (rec2[3] < rec1[3]);
10        
11
12
13        bool  is_left_in2 = (rec2[0] < rec1[0]) && (rec1[0] < rec2[2]);
14        bool  is_bot_in2 = (rec2[1] < rec1[1]) && (rec1[1] < rec2[3]);
15        bool  is_right_in2 = (rec2[0] < rec1[2]) && (rec1[2] < rec2[2]);
16        bool  is_top_in2 = (rec2[1] < rec1[3]) && (rec1[3] < rec2[3]);
17
18
19//        bool meow = (is_left_in2 || is_right_in2) && (is_top_in1 || is_bot_in1);
20  //      bool meow2 = (is_left_in1 || is_right_in1) && (is_top_in2 || is_bot_in2);
21
22        
23        return (is_left_in1 && is_bot_in1) 
24            || (is_left_in1 && is_top_in1) 
25            || (is_right_in1 && is_bot_in1) 
26            || (is_right_in1 && is_top_in1)
27            || (is_left_in2 && is_bot_in2) 
28            || (is_left_in2 && is_top_in2) 
29            || (is_right_in2 && is_bot_in2) 
30            || (is_right_in2 && is_top_in2);
31
32    }   
33
34};