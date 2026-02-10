1from collections import Counter
2
3class Solution:
4    def longestPalindrome(self, s: str) -> int:
5        longest = 0
6        counts = Counter(s)
7
8        odd_exists = False
9
10
11        for count in counts.values():
12            if count % 2 == 1:
13                odd_exists = True
14                longest -= 1
15            
16            longest += count
17
18        return longest + odd_exists