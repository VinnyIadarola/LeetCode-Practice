1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        std::unordered_map<int, int> mp;
5
6        for(size_t i = 0; i < nums.size(); ++i) {
7            if( auto search = mp.find(nums[i]); search != mp.end() ) {
8                if( (std::abs(static_cast<int>(search->second - i)) <= k) ) return true;
9            }
10
11            mp[nums[i]] = i;
12
13        }
14        return false;
15
16    }
17
18};