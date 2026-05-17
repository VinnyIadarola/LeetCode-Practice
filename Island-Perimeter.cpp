1class Solution {
2public:
3    int islandPerimeter(vector<vector<int>>& grid) {
4        int perimeter_val = 0;
5
6        for(int row = 0; row != grid.size(); ++row) {
7            for(int col = 0; col != grid[row].size(); ++col) {
8
9
10                if(grid[row][col]) {
11                   perimeter_val += adjecentWaterTileCount(row, col, grid);
12                }
13            }
14        }
15
16        return perimeter_val;
17    }
18
19private:
20    inline int adjecentWaterTileCount(int row, int col, vector<vector<int>>& grid) {
21        const int dirs[4][2] = {
22            { 0,  1},
23            { 1,  0},
24            { 0, -1},
25            {-1,  0}
26        };
27        
28        int num_of_valid = 0;
29        for( auto [x_dir , y_dir] : dirs ) {
30            if(
31                row + x_dir >= grid.size() ||
32                row + x_dir < 0 ||
33                col + y_dir >= grid[row].size() ||
34                col + y_dir < 0 
35            ) {
36                num_of_valid += 1;
37            } else {
38                num_of_valid += (grid[row + x_dir][col + y_dir] == 0);
39            }
40
41        }
42        return num_of_valid;
43    }
44};