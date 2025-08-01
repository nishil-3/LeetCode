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
    int minDepth(TreeNode* root) {
        /*
        can be done using bfs and dfs 
        tc is 0(n);
        sc is 0(n);
        */
        if (root == nullptr) return 0;
        queue <pair<TreeNode*,int>> q;
        q.push({root,1});
        while(!q.empty ())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* node =q.front().first;
                int depth = q.front().second;
                q.pop();
                  if (!node->left && !node->right)
            return depth;
                if (node-> left)
                {
                    q.push({node->left,depth+1});
                }
                 if (node-> right)
                {
                    q.push({node->right,depth+1});
                }


            }
        }
        return 0;
        // this will never be 0;
        
    }
};