class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {')': '(', ']': '[', '}': '{'}
        for c in s:
            if c in mapping:
                if not stack or stack[-1] != mapping[c]:
                    return False
                stack.pop()
            else:
                stack.append(c)
        return not stack


if __name__ == "__main__":
    print(Solution().isValid("()[]{}"))  # True
    print(Solution().isValid("(]"))  # False
