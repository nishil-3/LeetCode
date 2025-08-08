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
void insert (TreeNode* root, vector<int>&ans)
{
    if (root == nullptr) return ;
    if (root -> left == nullptr && root -> right == nullptr)
    {
        ans.push_back(root->val);
    }
    insert(root->left,ans);
    insert(root->right,ans);
    
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        /*
        bfs nahi use hoga, we will use dfs -> dfs mei kuch bhi use kar lenge and value null hai toh store karva lenge and then check akr lenge
        */
        vector<int> ans1;
        vector<int> ans2;
        insert(root1,ans1);
        insert(root2,ans2);
        if(ans1 == ans2) return true ;
        return false ;
        
    }
};