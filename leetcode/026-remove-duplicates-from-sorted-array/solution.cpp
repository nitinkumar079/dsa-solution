#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int write = 1;
        for (int i = 1; i < (int)nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[write++] = nums[i];
            }
        }
        return write;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = sol.removeDuplicates(nums);
    cout << k << " -> [";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << (i + 1 < k ? ", " : "");
    }
    cout << "]" << endl; // 5 -> [0, 1, 2, 3, 4]
    return 0;
}
