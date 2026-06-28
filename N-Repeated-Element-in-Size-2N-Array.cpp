1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        int hash[10];
5        memset(hash, -1, 10);
6
7        for(int num : nums) {
8            size_t hash_idx = num % 10;
9            int &stored_val = hash[hash_idx];
10
11            if (stored_val == num)
12                return num;
13            
14            
15            stored_val = num; 
16        }
17
18        return -1;
19    }
20};