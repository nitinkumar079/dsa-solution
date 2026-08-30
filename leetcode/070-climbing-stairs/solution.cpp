#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;
        int prev2 = 1, prev1 = 2;
        for (int i = 3; i <= n; i++)
        {
            int cur = prev1 + prev2;
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};

int main()
{
    Solution sol;
    cout << sol.climbStairs(2) << endl;  // 2
    cout << sol.climbStairs(3) << endl;  // 3
    return 0;
}
