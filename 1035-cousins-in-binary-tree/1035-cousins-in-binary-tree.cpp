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
    bool isCousins(TreeNode* root, int x, int y) {

        /*
        dekh , if they are not present at the same level then it is false.
        presemt at the saem level but parents same -> false ;

        true -> present at the same level but diff parents ??
        */

        if (root == nullptr) return true ;
        queue <pair<TreeNode* ,TreeNode* >>q;
        q.push({root,nullptr});
        while(!q.empty())
        {
            int size = q.size();
            TreeNode* x_parent = nullptr;
            TreeNode* y_parent = nullptr;

            for(int i = 0;i <size;i++)
            {
                TreeNode* curr = q.front().first ;
                TreeNode* parent = q.front().second ;
                q.pop();
                if (curr->val==x) x_parent = parent;
                if(curr->val==y) y_parent = parent;
                if(curr->left) q.push({curr-> left, curr});
                if(curr->right) q.push({curr-> right, curr});
            }
            if(x_parent && y_parent && x_parent != y_parent)  return true ;
            if((x_parent && !y_parent) || (!x_parent && y_parent)) return false ;
        }
        return false ;
        
    }
};