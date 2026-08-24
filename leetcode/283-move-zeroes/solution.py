from typing import List


# LeetCode 283: Move Zeroes
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        insert_pos = 0
        for num in nums:
            if num != 0:
                nums[insert_pos] = num
                insert_pos += 1
        for i in range(insert_pos, len(nums)):
            nums[i] = 0


if __name__ == "__main__":
    nums = [0, 1, 0, 3, 12]
    Solution().moveZeroes(nums)
    print(nums)  # [1, 3, 12, 0, 0]
