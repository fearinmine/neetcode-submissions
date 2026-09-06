class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i in range(len(nums)):
            t = target - nums[i]

            if t in dict: return [min(i, dict[t]), max(i, dict[t])]
            dict[nums[i]] = i
    