#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int write = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] != val) {
                nums[write++] = nums[i];
            }
        }
        return write;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 2, 3};
    int k = sol.removeElement(nums, 3);
    cout << k << " -> [";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << (i + 1 < k ? ", " : "");
    }
    cout << "]" << endl; // 2 -> [2, 2]
    return 0;
}
