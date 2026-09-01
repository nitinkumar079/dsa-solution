#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        while (cur && cur->next) {
            if (cur->val == cur->next->val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};

ListNode* build(initializer_list<int> vals) {
    ListNode dummy(0), *tail = &dummy;
    for (int v : vals) tail = tail->next = new ListNode(v);
    return dummy.next;
}

void print(ListNode* head) {
    while (head) {
        cout << head->val << (head->next ? " -> " : "");
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;
    print(sol.deleteDuplicates(build({1, 1, 2})));        // 1 -> 2
    print(sol.deleteDuplicates(build({1, 1, 2, 3, 3})));  // 1 -> 2 -> 3
    return 0;
}
