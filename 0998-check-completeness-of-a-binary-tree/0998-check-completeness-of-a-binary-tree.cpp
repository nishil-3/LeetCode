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
    bool isCompleteTree(TreeNode* root) {
        /*
        isme kya kiya, bfs hi use kiya hai and check kara hai 
        left and right agar present nahi hai toh null daal diya hai, and agar node null hai toh uske baad kuch nahi aa sakta but agar 
        null ke baad bhi left and right exist karti hai toh it is false varna true ;
        */

        queue <TreeNode* > q;
        q.push(root);
        bool checko = false ;
        while (!q.empty ())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node == nullptr) checko = true ;
            else {
                if (checko) return false ;
                q.push(node-> left);
                q.push(node-> right);
            }

        }
        return true ;
        
    }
};