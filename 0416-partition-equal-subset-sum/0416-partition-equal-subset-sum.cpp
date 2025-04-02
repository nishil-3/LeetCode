class Solution {
public:
bool ans (vector<int> &nums, int index, int sum,  vector<vector<int>> &dp)
{
    if (sum == 0) return true;
        if (index == 0) return nums[0] == sum;  // Fix base condition

        if(dp[index][sum]!=-1) return dp[index][sum];


        bool notPick = ans(nums, index - 1, sum,dp);
        bool pick = false;
        if (sum >= nums[index]) {
            pick = ans(nums, index - 1, sum - nums[index],dp);
        }
        return dp[index][sum] = notPick || pick;


}
    bool canPartition(vector<int>& nums) {
         int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % 2 == 1) return false;

        int k = sum / 2;
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return ans(nums, n - 1, k,dp);

        
    }
};