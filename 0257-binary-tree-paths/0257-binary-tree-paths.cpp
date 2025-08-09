/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void check(TreeNode* root, string path, vector<string>& ans) {

        // tc would be 0(n)-> traverse of every path.
        // sc would be 0(n) -> vector of string.
        if (!root){
             return;
           }

        if(!path.empty()) path +="->";

        path += to_string(root -> val);

        // if leaf node , put th path into the ans vector.
        if (!root -> left && !root-> right)
        {
            ans.push_back(path);
            return;
        }

        // dfs traversal
        check(root-> left, path,ans);
        check(root->right, path,ans);


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        /*
        backtracking-> remove the element.
        dfs traversal
        store it in the string.
        take a visited array to store elements.
        */
        vector<string> ans;
        if (!root)
            return ans;
         check(root, "", ans);
         return ans ;
    }
};