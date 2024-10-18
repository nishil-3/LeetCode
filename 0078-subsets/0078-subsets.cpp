class Solution {
public:
    void solve(vector<int> ans, vector<vector<int>>& final ,int index,
               vector<int> nums) {
        if (index == nums.size()) {
            final.push_back(ans);
            return;
        }
        ans.push_back(nums[index]);
        solve(ans,final,index+1,nums);
        ans.pop_back();

        solve(ans,final,index+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        int index = 0;
        vector<int> ans;
        vector<vector<int>> final ;
        solve(ans, final, index, nums);
        return final;
    }
};