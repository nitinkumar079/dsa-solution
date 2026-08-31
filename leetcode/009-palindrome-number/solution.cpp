#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long reversed = 0;
        int original = x;
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return original == reversed;
    }
};

int main() {
    Solution sol;
    cout << sol.isPalindrome(121) << endl;  // 1 (true)
    cout << sol.isPalindrome(-121) << endl; // 0 (false)
    cout << sol.isPalindrome(10) << endl;   // 0 (false)
    return 0;
}
