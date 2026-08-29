#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (int)nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int x : nums) sum += x;
        return total - sum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1};
    cout << sol.missingNumber(nums) << endl; // 2
    return 0;
}
