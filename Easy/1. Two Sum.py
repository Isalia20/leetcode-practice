class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        num_dict = {}
        for idx in range(len(nums)):
            complement = target - nums[idx]
            if complement in num_dict:
                idx_2 = num_dict[complement]
                idx_1 = idx
                return [idx_1, idx_2]
            num_dict[nums[idx]] = idx
