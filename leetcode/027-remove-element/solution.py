from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        write = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[write] = nums[i]
                write += 1
        return write


if __name__ == "__main__":
    nums = [3, 2, 2, 3]
    k = Solution().removeElement(nums, 3)
    print(f"{k} -> {nums[:k]}")  # 2 -> [2, 2]
