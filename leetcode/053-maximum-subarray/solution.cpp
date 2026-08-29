#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0];
        int cur = nums[0];
        for (int i = 1; i < (int)nums.size(); i++) {
            cur = max(nums[i], cur + nums[i]);
            best = max(best, cur);
        }
        return best;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << sol.maxSubArray(nums) << endl; // 6
    return 0;
}
