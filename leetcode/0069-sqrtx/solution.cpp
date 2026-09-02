#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long lo = 0, hi = x;
        while (lo < hi) {
            long long mid = (lo + hi + 1) / 2;
            if (mid * mid <= x) lo = mid;
            else hi = mid - 1;
        }
        return (int)lo;
    }
};

int main() {
    Solution sol;
    cout << sol.mySqrt(4) << endl;   // 2
    cout << sol.mySqrt(8) << endl;   // 2
    cout << sol.mySqrt(0) << endl;   // 0
    return 0;
}