class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> output, vector<int> nums,
               int index) {
        if (index== nums.size()) {
            ans.push_back(output);
            return;
        }
        // exclude and include

        
        output.push_back(nums[index]);
        solve(ans, output, nums, index+1 );
        output.pop_back();


        for (int i = index + 1; i < nums.size(); i++) {
            if (nums[index] != nums[i]) {
                solve(ans, output, nums, i);
               return;
               
            }
        }
        solve(ans,output,nums,nums.size());

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        int n = nums.size();
        sort (nums.begin(),nums.end());
        
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        solve(ans, output, nums, index);
        return ans;
    }
};