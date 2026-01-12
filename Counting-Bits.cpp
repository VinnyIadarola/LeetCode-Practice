1class Solution {
2public:
3    vector<int> countBits(int n) {
4        vector<int> counts;
5        if(n < 0) return counts;
6
7        for(int i = 0; i != (n + 1); ++i) {
8            counts.push_back(counter(i));
9        }
10
11        return counts;
12    }
13
14
15private:
16    int counter(int num) {
17        int sum = 0;
18        
19        while(num != 0) {
20            ++sum;
21            num &= (num - 1);
22        }
23
24        return sum;
25    }
26};