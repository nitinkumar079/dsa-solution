#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = (int)s.size(), count = 0;
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') i--;
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }
};

int main() {
    Solution sol;
    cout << sol.lengthOfLastWord("Hello World") << endl;        // 5
    cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << endl; // 4
    cout << sol.lengthOfLastWord("luffy is still joyboy") << endl; // 6
    return 0;
}
