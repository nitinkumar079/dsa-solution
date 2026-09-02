class Solution:
    def mySqrt(self, x: int) -> int:
        lo, hi = 0, x
        while lo < hi:
            mid = (lo + hi + 1) // 2
            if mid * mid <= x:
                lo = mid
            else:
                hi = mid - 1
        return lo


if __name__ == "__main__":
    print(Solution().mySqrt(4))  # 2
    print(Solution().mySqrt(8))  # 2
    print(Solution().mySqrt(0))  # 0