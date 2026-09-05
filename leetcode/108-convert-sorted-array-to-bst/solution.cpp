#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, (int)nums.size() - 1);
    }

private:
    TreeNode* build(vector<int>& nums, int lo, int hi) {
        if (lo > hi) return nullptr;
        int mid = lo + (hi - lo) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = build(nums, lo, mid - 1);
        node->right = build(nums, mid + 1, hi);
        return node;
    }
};

void inorder(TreeNode* root, vector<int>& res) {
    if (!root) return;
    inorder(root->left, res);
    res.push_back(root->val);
    inorder(root->right, res);
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};
    Solution sol;
    TreeNode* root = sol.sortedArrayToBST(nums);

    vector<int> result;
    inorder(root, result);
    for (int x : result) cout << x << " "; // -10 -3 0 5 9
    cout << endl;
    return 0;
}
