#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = (int)haystack.size(), m = (int)needle.size();
        for (int i = 0; i + m <= n; i++) {
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (haystack[i + j] != needle[j]) {
                    match = false;
                    break;
                }
            }
            if (match) return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    cout << sol.strStr("sadbutsad", "sad") << endl;   // 0
    cout << sol.strStr("leetcode", "leeto") << endl;   // -1
    return 0;
}