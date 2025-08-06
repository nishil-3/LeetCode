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
    TreeNode* buildTree(vector<int>& preorder, int preStart, int preEnd,
                        vector<int>& inorder, int inStart, int inEnd,
                        map<int, int>& inMap) {
        // base case
        if (inStart > inEnd || preStart > preEnd)
            return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);
        // root first element hi hoga preorder ka
        // now left adn right recursive call karde
        int inRoot = inMap[root->val];
        int numsLeft = inRoot - inStart;
        root->left = buildTree(preorder, preStart + 1, preStart + numsLeft,
                               inorder, inStart, inRoot - 1,inMap);
        root->right = buildTree(preorder, preStart + numsLeft + 1, preEnd,
                                inorder, inRoot + 1, inEnd,inMap);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[inorder[i]] = i;
        }
        TreeNode* root = buildTree(preorder, 0, preorder.size() - 1, inorder, 0,
                                   inorder.size() - 1, mp);
        return root;
    }
};