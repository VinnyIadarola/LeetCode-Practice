class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        nums.append(None)

        for i in range(0, len(nums)):

            curr = nums[i]
            nums[i] = None

            while curr is not None:
                in_my_spot = nums[curr] 
                
                if in_my_spot == curr:
                    break
                else:
                    nums[curr] = curr
                    curr = in_my_spot
            
                

        out = []
        for i in range(1, len(nums)):
            if nums[i] is None:
                out.append(i)
        return out