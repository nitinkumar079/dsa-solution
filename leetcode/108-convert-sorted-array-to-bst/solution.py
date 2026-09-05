from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        return self._build(nums, 0, len(nums) - 1)

    def _build(self, nums: List[int], lo: int, hi: int) -> Optional[TreeNode]:
        if lo > hi:
            return None
        mid = (lo + hi) // 2
        node = TreeNode(nums[mid])
        node.left = self._build(nums, lo, mid - 1)
        node.right = self._build(nums, mid + 1, hi)
        return node


def inorder(root: Optional[TreeNode]) -> List[int]:
    if not root:
        return []
    return inorder(root.left) + [root.val] + inorder(root.right)


if __name__ == "__main__":
    nums = [-10, -3, 0, 5, 9]
    root = Solution().sortedArrayToBST(nums)
    print(inorder(root))  # [-10, -3, 0, 5, 9]
