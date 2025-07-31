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
    int maxDepth(TreeNode* root) {
        /*
        time complexity would be 0(n);
        space complexity would be 0(n);
        */

        queue <TreeNode*> q;
        int cnt =0 ;
        if (root == nullptr) return cnt ;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            for(int i =0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if (node-> left ) q.push(node->left);
                if (node-> right ) q.push(node->right);
            }
            cnt++;
        }
        return cnt ;
    }
};