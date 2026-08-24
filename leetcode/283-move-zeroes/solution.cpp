#include <bits/stdc++.h>
using namespace std;

// LeetCode 283: Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        for (int num : nums) {
            if (num != 0) {
                nums[insertPos++] = num;
            }
        }
        while (insertPos < (int)nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);
    for (int num : nums) cout << num << " "; // 1 3 12 0 0
    cout << endl;
    return 0;
}
