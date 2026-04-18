1class Solution {
2public:
3    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
4        for (auto &vec : image) {
5            int low = 0;
6            int high = vec.size() - 1;
7
8            while(low < high) {
9                int temp = vec[low];
10                vec[low] = vec[high] ^ 1;
11                vec[high] = temp ^ 1;
12
13                --high;
14                ++low;
15            }
16
17            if( low == high ) {
18                vec[low] ^= 1;
19            }
20        }
21
22
23        return image;
24    }
25};