class Solution:
    def reverseBits(self, n: int) -> int:
        result = 0
        for _ in range(32):
            result = (result << 1) | (n & 1)
            n >>= 1
        return result


if __name__ == "__main__":
    print(Solution().reverseBits(43261596))  # 964176192
    print(Solution().reverseBits(4294967293))  # 3221225471