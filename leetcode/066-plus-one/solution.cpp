#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = (int)digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution sol;
    vector<int> d1 = {1, 2, 3};
    for (int x : sol.plusOne(d1)) cout << x; // 124
    cout << endl;
    vector<int> d2 = {9, 9};
    for (int x : sol.plusOne(d2)) cout << x; // 100
    cout << endl;
    return 0;
}
