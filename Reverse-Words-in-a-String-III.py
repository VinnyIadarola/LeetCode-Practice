1class Solution:
2    def reverseWords(self, s: str) -> str:
3        rever = ""
4        words = s.split(" ")
5
6        for word in words:
7            rever += word[::-1] + ' '
8        
9        return rever[:-1]