class Solution {
public:
    bool check(vector<int>& nums, int n, int target,vector<vector<bool>>& dp) {
        // base case 
          for (int i = 0; i <= n; i++) dp[i][0] = true;
    for (int j = 1; j <= target; j++) dp[0][j] = false;
        for(int i =1;i<=n;i++)
         {
            for(int j =1;j<=target;j++)
            {
                if (i==0 || j==0) dp[i][j]=false;
                else if(nums[i-1]>j)
                {
                    // not pick 
                    dp[i][j]= dp[i-1][j];
                }
                else if (j>=nums[i-1])
                {
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
            }
         }
         return dp[n][target];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (auto it : nums)
            sum += it;
        if (sum % 2 == 1)
            return false;
            int k = sum/2;
            vector<vector<bool>> dp(n+1,vector<bool>(k+1,false));
        return check(nums, n , k,dp);
    }
};