class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left = 0
        right = len(nums) - 1
        new_list = []
        while left <= right:
            if nums[right] ** 2 >= nums[left] ** 2:
                new_list.insert(0, nums[right] ** 2)
                right -= 1
            else:
                new_list.insert(0, nums[left] ** 2)
                left += 1
        return new_list
