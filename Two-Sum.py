class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = dict()
        for i, numb in enumerate(nums):

            # ensure that there exists a number pair
            if(hash.get(numb) is not None):
                # return the index of the number pair and current number
                return [i,hash[numb]]
            hash[target - nums[i]] = i


    
            


        