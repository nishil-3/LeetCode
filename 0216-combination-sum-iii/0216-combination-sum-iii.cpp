class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> nums, int k, int sum,
               int index) {

                if (sum == 0 && nums.size()== k )
                {
                    ans.push_back(nums);
                    return ;
                }
                if (sum <= 0|| nums.size ()> k) return ;

                for(int i = index;i <= 9;i++)
                {
                    if (i<= sum )
                    {
                        nums.push_back(i);
                        solve(ans,nums,k, sum- i, i+1);
                        nums.pop_back();
                    }
                    else{
                        break ; 
                    }

                }



               }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        vector<vector<int>> ans;
        solve(ans, nums, k, n, 1);
        return ans;
    }
};