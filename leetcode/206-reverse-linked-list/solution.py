from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        while head:
            nxt = head.next
            head.next = prev
            prev = head
            head = nxt
        return prev


if __name__ == "__main__":
    head = ListNode(1, ListNode(2, ListNode(3)))
    res = Solution().reverseList(head)
    while res:
        print(res.val, end=" ")  # 3 2 1
        res = res.next
    print()