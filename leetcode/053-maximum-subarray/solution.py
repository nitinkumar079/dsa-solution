from typing import List


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        best = cur = nums[0]
        for i in range(1, len(nums)):
            cur = max(nums[i], cur + nums[i])
            best = max(best, cur)
        return best


if __name__ == "__main__":
    print(Solution().maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))  # 6
