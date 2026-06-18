1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4        int gap = 27;
5
6        for(char c : letters) {
7            if(c > target){
8                int new_gap = c - target;
9
10                if(new_gap < gap){
11                    gap = new_gap;
12                    letters[0] = c;
13                }
14
15            }
16        }
17
18        return letters[0];
19    }
20};