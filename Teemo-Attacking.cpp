1class Solution {
2public:
3    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
4        int poison_time = 0;
5        
6        for(size_t t = 1; t != timeSeries.size(); ++t) {
7            poison_time += (timeSeries[t - 1] + duration < timeSeries[t]) ?
8                duration : timeSeries[t] - timeSeries[t - 1];
9        }
10
11        return poison_time + duration;
12    }
13};