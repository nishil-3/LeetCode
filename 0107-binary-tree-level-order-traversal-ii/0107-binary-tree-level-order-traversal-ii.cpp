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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        /*
        same as level order traversal but last mei i will reverse the array - one logic is this 
        */
        vector<vector<int>> ans;
        if (root == nullptr) return  ans ;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> lvl ;
            for (int i =0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                lvl.push_back(node-> val);
                if (node-> left ) q.push(node-> left);
                if (node-> right ) q.push(node-> right);
            }
            ans.push_back(lvl);
        }
        reverse(ans.begin(),ans.end());
        return ans ;


        
    }
};