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
    solve(candidates,target-candidates[index],ans,output,index+1);
    output.pop_back();
   for (int i = index+1;i<candidates.size();i++)
   {
    if (candidates[i]!=candidates[index])
    {
      solve(candidates,target,ans,output,i);
      break;

    }
   }
    
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

          sort(candidates.begin(),candidates.end());
          vector<vector<int>> ans ;
          int index = 0;
          vector<int> output;
          solve(candidates, target,ans,output,index);
          

          return ans ;
        
    }
};