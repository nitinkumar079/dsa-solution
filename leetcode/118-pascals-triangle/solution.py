from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        tri = []
        for i in range(numRows):
            row = [1] * (i + 1)
            for j in range(1, i):
                row[j] = tri[i - 1][j - 1] + tri[i - 1][j]
            tri.append(row)
        return tri


if __name__ == "__main__":
    for row in Solution().generate(5):
        print(row)
    # [1]
    # [1, 1]
    # [1, 2, 1]
    # [1, 3, 3, 1]
    # [1, 4, 6, 4, 1]
