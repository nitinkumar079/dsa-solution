class Solution:
    def sum_of_squares(self, n: int) -> int:
        total = 0
        while n > 0:
            d = n % 10
            total += d * d
            n //= 10
        return total

    def isHappy(self, n: int) -> bool:
        seen = set()
        while n != 1 and n not in seen:
            seen.add(n)
            n = self.sum_of_squares(n)
        return n == 1


if __name__ == "__main__":
    s = Solution()
    print(s.isHappy(19))  # True
    print(s.isHappy(2))  # False
