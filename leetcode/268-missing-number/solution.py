from typing import List


class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        total = n * (n + 1) // 2
        return total - sum(nums)


if __name__ == "__main__":
    print(Solution().missingNumber([3, 0, 1]))  # 2
