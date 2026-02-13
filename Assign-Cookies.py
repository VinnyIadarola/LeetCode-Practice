1class Solution:
2    def findContentChildren(self, g: List[int], s: List[int]) -> int:
3        s.sort()
4        g.sort()
5
6        i = 0
7        j = 0
8        while(i != len(g) and j != len(s)):
9            if(s[j] >= g[i]):
10                i += 1
11
12            j += 1
13
14        
15        return i
16            