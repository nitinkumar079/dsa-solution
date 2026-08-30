# time complexity: O(n)
# space complexity: O(1)
class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n
        prev2, prev1 = 1, 2
        for _ in range(3, n + 1):
            prev2, prev1 = prev1, prev1 + prev2
        return prev1


if __name__ == "__main__":
    print(Solution().climbStairs(2))  # 2
    print(Solution().climbStairs(3))  # 3
