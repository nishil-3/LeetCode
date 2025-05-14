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
    int cnt  =0 ;
    void dfs(TreeNode* node, vector<int> & frequency)
    {
        if (!node) return ;
        frequency[node->val] ++ ;
        if (!node-> left && !node -> right)
        {
            int oddcount = 0;
            for(int i =1;i<=9;i++)
            {
                if (frequency[i]%2 != 0) 
                {
                    oddcount ++;
                }
            }
            if (oddcount <= 1 ) 
            {
                cnt++;
            }
        }
        else {
            dfs (node-> left, frequency) ;
            dfs(node-> right, frequency);
        }
        frequency[node-> val]-- ;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> frequency (10,0);
        dfs(root,frequency);
        return cnt ;

        
    }
};