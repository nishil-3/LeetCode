class Solution {
public:

void solve(vector<int> candidates, int target,vector<vector<int>> & ans,vector<int> output,int index)
{
    if (target ==0)
    {
        ans.push_back(output);
        return ;
    }
    if(index == candidates.size() || target<0)
    {
        return ;
    }
    output.push_back(candidates[index]);
    solve(candidates,target-candidates[index],ans,output,index);
    output.pop_back();
    solve(candidates,target,ans,output,index+1);
    
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> ans ;
          int index = 0;
          vector<int> output;
          solve(candidates, target,ans,output,index);
          return ans ;
    }
};