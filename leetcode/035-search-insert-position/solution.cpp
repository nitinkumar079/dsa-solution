#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = (int)nums.size();
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] < target) lo = mid + 1;
            else hi = mid;
        }
        return lo;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    cout << sol.searchInsert(nums, 5) << endl; // 2
    cout << sol.searchInsert(nums, 2) << endl; // 1
    cout << sol.searchInsert(nums, 7) << endl; // 4
    return 0;
}
