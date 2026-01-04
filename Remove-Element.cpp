1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4   
5        std::erase_if(nums, [val](int x){ return x == val;});
6
7        return nums.size();
8    }
9};