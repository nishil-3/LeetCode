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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
      queue <TreeNode*> q;
      q.push(root);
      while(!q.empty())
      {
        int size = q.size();
        stack<int> lvl;
        for(int i =0;i<size;i++)
        {
            TreeNode* node = q.front();
            q.pop();
            lvl.push(node-> val);
            if(node-> left) q.push(node-> left);
            if(node-> right) q.push(node-> right);

        }
        int value = lvl.top();
        ans.push_back(value);
      }
      return ans ;


        
    }
};