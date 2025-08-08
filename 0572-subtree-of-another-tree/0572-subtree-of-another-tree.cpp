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
bool checko(TreeNode* root, TreeNode* subRoot)
{
    if (root ==nullptr && subRoot==nullptr) return true ;
    if(root ==nullptr || subRoot == nullptr) return false ;

    if(root->val!=subRoot->val) return false ;
    return checko(root->left,subRoot->left) && checko(root->right,subRoot->right);


}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

     if(root == nullptr) return false;
     if(checko(root,subRoot)) return true ;

     return isSubtree(root-> right,subRoot)||isSubtree(root-> left,subRoot);
        
    }
};