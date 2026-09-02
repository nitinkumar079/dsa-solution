#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            result = (result << 1) | (n & 1);
            n >>= 1;
        }
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.reverseBits(43261596) << endl;        // 964176192
    cout << sol.reverseBits(4294967293) << endl;      // 3221225471
    return 0;
}