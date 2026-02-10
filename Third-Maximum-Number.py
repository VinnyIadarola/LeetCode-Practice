1class Solution:
2    def thirdMax(self, nums: List[int]) -> int:
3        meow = sorted(set(nums))
4
5        return meow[-3] if len(meow) > 2 else max(meow)
6        