#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            n = sumOfSquares(n);
        }
        return n == 1;
    }
};

int main() {
    Solution sol;
    cout << sol.isHappy(19) << endl; // 1 (true)
    cout << sol.isHappy(2) << endl;  // 0 (false)
    return 0;
}
