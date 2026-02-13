1class Solution:
2    def checkRecord(self, s: str) -> bool:
3        late_consecutive_count = 0
4        absent_count = 0
5
6        for i in range(len(s)):
7            if s[i] == 'A':
8                absent_count += 1
9                late_consecutive_count = 0
10            elif s[i] == 'L':
11                late_consecutive_count += 1
12            else:
13                late_consecutive_count = 0
14            
15            if absent_count == 2 or late_consecutive_count == 3:
16                return False
17
18
19        return True
20