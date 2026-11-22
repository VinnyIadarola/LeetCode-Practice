class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        nums.append(None)

        while True:
            moved_num = False
            for i in range(0, len(nums)):
                curr = nums[i]
                if curr is None or curr == i:
                    continue
                
                mover = nums[curr] 
                moved_num = True
                
                if mover == curr:
                    nums[i] = None
                else:
                    nums[curr] = curr
                    nums[i] = mover
                
            if not moved_num:
                break

        out = []
        for i in range(1, len(nums)):
            if nums[i] is None:
                out.append(i)
        return out

e