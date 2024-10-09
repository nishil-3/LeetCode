class Solution {
public:
void solve(vector<int> nums,int index, vector<vector<int>> &ans)
{
    if ((index>=nums.size()))
    {
        ans.push_back(nums);
        return ;
    }
    // base case 
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[i],nums[index]);
        solve(nums,index+1,ans);
        swap(nums[i],nums[index]);
    }
    //


}
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;

        vector<vector<int>> ans ;
        solve(nums,index,ans);
        return ans ;

        
    }
};