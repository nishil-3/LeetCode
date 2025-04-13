/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* node, int& bt) {
        if (node == nullptr)
            return 0;

        int left = solve(node->left, bt);
        int right = solve(node->right, bt);
        bt = max(bt, abs(left - right));
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        int isBt = 0;
        solve(root, isBt);
        return isBt <= 1;
    }
};