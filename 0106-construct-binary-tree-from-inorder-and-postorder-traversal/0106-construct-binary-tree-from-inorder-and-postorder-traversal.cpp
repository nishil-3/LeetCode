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
 TreeNode* buildTree(vector<int>&inorder, int iStart, int iEnd, vector<int>&postorder, int pStart, int Pend, map<int,int>& inMap)
    {
        if(iStart > iEnd || pStart>Pend) return NULL;
        TreeNode* root = new TreeNode(postorder[Pend]);
        int inRoot = inMap[root->val];
        int numsize = inRoot-iStart;

        root->left = buildTree(inorder,iStart,inRoot-1,postorder,pStart,pStart+numsize-1,inMap);
        root->right = buildTree(inorder,inRoot+1, iEnd, postorder, pStart+numsize,Pend-1,inMap);

return root ;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int isize = inorder.size();
        int psize = postorder.size();
        map<int,int> inMap;
        for(int i =0;i<isize;i++)
        {
            inMap[inorder[i]]=i;
            // value = key 
        }
        TreeNode* root = buildTree(inorder,0,isize-1,postorder,0,psize-1,inMap);
        return root ;   
    }
   

};