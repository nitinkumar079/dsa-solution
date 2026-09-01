class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        i = len(s) - 1
        while i >= 0 and s[i] == " ":
            i -= 1
        count = 0
        while i >= 0 and s[i] != " ":
            count += 1
            i -= 1
        return count


if __name__ == "__main__":
    print(Solution().lengthOfLastWord("Hello World"))  # 5
    print(Solution().lengthOfLastWord("   fly me   to   the moon  "))  # 4
    print(Solution().lengthOfLastWord("luffy is still joyboy"))  # 6
