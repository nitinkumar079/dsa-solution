#include <bits/stdc++.h>
using namespace std;

// LeetCode 217: Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) return true;
            seen.insert(num);
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << boolalpha << sol.containsDuplicate(nums) << endl; // true
    return 0;
}
