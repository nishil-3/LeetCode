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
    bool isValidBST(TreeNode* root) {
        return checko (root, LONG_MAX, LONG_MIN );
		}
		bool checko (TreeNode* root, long max, long min)
		{
			if (root == nullptr) return true ;

			if (root->val <= min || root->val >= max) return false ;

			bool isleft = checko(root-> left, root-> val, min);
			bool isright = checko(root-> right, max , root-> val);

			return isleft && isright ;

		}
        
    
};