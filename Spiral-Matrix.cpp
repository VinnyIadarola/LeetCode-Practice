1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4
5
6        vector<int> output;
7
8        size_t lower[2] = {0, 0};
9        size_t upper[2] = {matrix.size(), matrix[0].size()};
10
11        output.reserve(upper[0]*upper[1]);
12
13
14       
15
16        while(true) {
17
18            if((lower[0] >= upper[0]) || (lower[1] >= upper[1]))
19                break;
20
21            size_t row = lower[0];
22            size_t col = lower[1];
23            for(; col != upper[1]; col++) {
24                output.push_back(matrix[row][col]);
25            }
26            lower[0]++;
27
28            if((lower[0] >= upper[0]) || (lower[1] >= upper[1]))
29                break;
30            row = lower[0];
31            col = upper[1] - 1;
32            for(; row != upper[0]; row++) {
33
34                output.push_back(matrix[row][col]);
35                
36            }
37            upper[1]--;
38
39
40            if((lower[0] >= upper[0]) || (lower[1] >= upper[1]))
41                break;
42            row = upper[0] - 1;
43            col = upper[1] - 1;
44            for(; col != lower[1] - 1; col--) {
45                output.push_back(matrix[row][col]);
46
47            }
48            upper[0]--;
49
50
51            if((lower[0] >= upper[0]) || (lower[1] >= upper[1]))
52                break;
53            row = upper[0] - 1;
54            col = lower[1];
55            for(; row != lower[0] - 1; row--) {
56                output.push_back(matrix[row][col]);
57                
58            }
59            lower[1]++;
60
61        }
62
63        return output;
64
65    }
66};