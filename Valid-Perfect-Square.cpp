1class Solution {
2public:
3       bool isPerfectSquare(int num) {
4        if(num < 0) return false;
5        if(num <= 1) return true;
6
7        int low = 1;
8        int high = num;
9
10        while(low <= high) {
11            int mid = low + (high - low)/2;
12            long long mid2 = static_cast<long long>(mid) * static_cast<long long>(mid);
13
14            if(mid2 == static_cast<long long>(num)) 
15                return true;
16
17
18            if( mid2 < static_cast<long long>(num) ) {
19                low = mid + 1;
20            } else {
21                high = mid - 1;
22            }
23        }
24
25
26
27        return false;
28    }
29};