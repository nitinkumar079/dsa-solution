#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n >= 5) {
            n /= 5;
            count += n;
        }
        return count;
    }
};

int main() {
    Solution sol;
    cout << sol.trailingZeroes(5) << endl;  // 1
    cout << sol.trailingZeroes(10) << endl; // 2
    cout << sol.trailingZeroes(25) << endl; // 6
    return 0;
}
