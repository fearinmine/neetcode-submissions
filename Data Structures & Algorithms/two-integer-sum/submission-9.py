class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i in range(len(nums)):
            num = target - nums[i]
            if num in dict:
                return [min(i, dict[num]), max(i, dict[num])]
            dict[nums[i]] = i