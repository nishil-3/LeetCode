/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void recoverTree(TreeNode* root) {
           inorder(root);
        sort(ans.begin(), ans.end());
        restore(root);
    }

   private:
    vector<int> ans;
    int index = 0;
    void inorder(TreeNode* root) {
        if (root) {
            inorder(root->left);
            ans.push_back(root->val);
            inorder(root->right);
        }
    }
    void restore(TreeNode* root) {
        if (root) {
            restore(root->left);
            root->val = ans[index++];
            restore(root->right);
        }
    }
};