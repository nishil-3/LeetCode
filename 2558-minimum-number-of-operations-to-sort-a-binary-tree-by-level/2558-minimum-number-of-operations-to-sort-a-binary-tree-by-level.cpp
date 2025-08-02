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
int minSwaps(vector<int>& nums)
{
    // yeh logic figure out karna hai 
    int n= nums.size();
    vector<pair<int,int>> v;
    int cnt_swap =0;
    for (int i =0;i<n;i++)
    {
        v.push_back({nums[i],i});
    }
    sort(v.begin(),v.end());
    vector<bool> visited(n,false);
    for(int i =0;i<n;i++)
    {
           if (visited[i] || v[i].second == i)
            continue;

        int j = i;
        int cnt = 0;
        while(!visited[j])
        {
            visited[j] = true ;
            j= v[j].second;
            cnt++;
        }
        if(cnt >1)
        {
            cnt_swap+=cnt-1;
        }
    }
return cnt_swap; 

}
    int minimumOperations(TreeNode* root) {
        /*
        isme bfs hi use hoga, level order, store karta rahunga and then check karung if alr sorted hai toh 0 varna cnt variable inc hota raehag 
        s
        question is how would you apply min swaps 
        */
        queue <TreeNode*> q;
        q.push(root);
        int cnt =0;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> lvl;
            for(int i =0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                lvl.push_back(node->val);
                if(node-> left) q.push(node-> left);
                if(node-> right) q.push(node-> right);
            }
            cnt+=minSwaps(lvl);
        }
        return cnt ;
        
    }
};