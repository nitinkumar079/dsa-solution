class Solution:
    def trailingZeroes(self, n: int) -> int:
        count = 0
        while n >= 5:
            n //= 5
            count += n
        return count


if __name__ == "__main__":
    print(Solution().trailingZeroes(5))   # 1
    print(Solution().trailingZeroes(10))  # 2
    print(Solution().trailingZeroes(25))  # 6
