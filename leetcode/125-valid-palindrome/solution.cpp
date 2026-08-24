#include <bits/stdc++.h>
using namespace std;

// LeetCode 125: Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = (int)s.size() - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;
            if (tolower(s[left]) != tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isPalindrome("A man, a plan, a canal: Panama") << endl; // true
    return 0;
}
