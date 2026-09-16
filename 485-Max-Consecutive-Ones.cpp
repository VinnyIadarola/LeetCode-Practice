class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        size_t count = 0;
        size_t max_count = 0;


        for(int num : nums) {
            if(!num) {
                count = 0;
                continue;
            }

            ++count;

            if(count > max_count)
                max_count = count;
        }

        return max_count;
    }
};