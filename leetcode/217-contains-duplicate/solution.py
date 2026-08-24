from typing import List


# LeetCode 217: Contains Duplicate
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(set(nums)) < len(nums)


if __name__ == "__main__":
    print(Solution().containsDuplicate([1, 2, 3, 1]))  # True
