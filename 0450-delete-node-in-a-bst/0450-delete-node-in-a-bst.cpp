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
    TreeNode* minval(TreeNode* root) {
        TreeNode* node = root;
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        // 0 child, 1 child, 2 child cases

        if (root == nullptr)
            return root;

        if (root->val == key) {
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                return nullptr;
            }
            if (root->left != nullptr && root->right == nullptr) {
                TreeNode* node = root->left;
                delete root;
                return node;
            }
            if (root->left == nullptr && root->right != nullptr) {
                TreeNode * node = root->right;
                delete root;
                return node;
            }

            if (root->left != nullptr && root->right != nullptr) {
                int mini = minval(root->right)->val;
                root->val = mini;
                root->right = deleteNode(root->right, mini);
                return root;
            }

        } else if (root->val > key) {
     root-> left = deleteNode(root-> left, key);
            return root;
        } else {
          root-> right = deleteNode(root-> right, key);
            return root;
        }
        return root;
    }
};