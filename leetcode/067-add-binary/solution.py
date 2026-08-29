class Solution:
    def addBinary(self, a: str, b: str) -> str:
        res = ""
        i, j, carry = len(a) - 1, len(b) - 1, 0
        while i >= 0 or j >= 0 or carry:
            total = carry
            if i >= 0:
                total += int(a[i])
                i -= 1
            if j >= 0:
                total += int(b[j])
                j -= 1
            res = str(total % 2) + res
            carry = total // 2
        return res


if __name__ == "__main__":
    print(Solution().addBinary("11", "1"))      # 100
    print(Solution().addBinary("1010", "1011")) # 10101