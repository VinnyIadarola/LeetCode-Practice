1class Solution:
2    def fizzBuzz(self, n: int) -> List[str]:
3        out = [""] * n
4
5        for i in range(n):
6            special = False
7            if (i + 1) % 3 == 0:
8                out[i] += "Fizz"
9                special = True
10
11            if (i + 1) % 5 == 0:
12                out[i] += "Buzz"
13                special = True
14            
15            if not special:
16                out[i] += str(i + 1)
17
18        return out