class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        reversed_num = 0
        original = x
        while x != 0:
            reversed_num = reversed_num * 10 + x % 10
            x //= 10
        return original == reversed_num


if __name__ == "__main__":
    print(Solution().isPalindrome(121))   # True
    print(Solution().isPalindrome(-121))  # False
    print(Solution().isPalindrome(10))    # False
