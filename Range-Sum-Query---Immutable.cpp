1class NumArray {
2public:
3    vector<int> v;
4    NumArray(vector<int>& nums) {
5        v.reserve(nums.size());
6
7        v[0] = nums[0];
8
9
10        for(size_t i = 1; i != nums.size(); ++i) {
11            v[i] = v[i - 1] + nums[i];
12        }
13    }
14    
15    int sumRange(int left, int right) {
16        if(left == 0)
17            return v[right];
18
19        return v[right] - v[left - 1];
20    }
21};
22
23/**
24 * Your NumArray object will be instantiated and called as such:
25 * NumArray* obj = new NumArray(nums);
26 * int param_1 = obj->sumRange(left,right);
27 */