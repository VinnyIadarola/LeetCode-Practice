1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        std::vector<string> out;
5        if( nums.empty() ) return out;
6        int last = nums[0];
7
8
9        for(std::vector<int>::const_iterator it = nums.cbegin(); it != nums.cend(); ++it) {
10            if( (it + 1) == nums.cend() ) {         
11                handleRangeClose(*it, last, out);
12                break;
13            }
14
15            if( *it == ( *(it + 1) - 1 ) ) continue;
16
17   
18            handleRangeClose(*it, last, out);
19            last = *(it + 1);
20
21        }
22
23        return out;
24    }
25
26private:
27    inline void handleRangeClose(const int &val, const int &last, std::vector<string> &out) {
28        if(last == val) {
29            out.push_back(to_string(val));
30        } else {
31            out.emplace_back(to_string(last) + "->" + to_string(val));
32        }
33    }
34};
35