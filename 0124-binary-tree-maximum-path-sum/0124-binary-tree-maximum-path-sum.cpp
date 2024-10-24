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
private:
    int findo(int& maxi, TreeNode* root) {
        if (root == nullptr)
            return 0;
        int left = max(0, findo(maxi, root->left));
        int right = max(0, findo(maxi, root->right));
        // taken this to not consider the path which will return us a sum negative

        maxi = max(maxi, root->val + left + right);
        return root->val + max(left, right);
    }

public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        findo(maxi, root);
        return maxi;
    }
};