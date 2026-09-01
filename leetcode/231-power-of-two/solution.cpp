#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isPowerOfTwo(1) << endl;   // true
    cout << sol.isPowerOfTwo(16) << endl;  // true
    cout << sol.isPowerOfTwo(3) << endl;   // false
    return 0;
}
