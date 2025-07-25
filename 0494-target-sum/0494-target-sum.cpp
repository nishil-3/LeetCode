class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum =0;
        for(auto it : nums) sum+=it;
          if ((sum + target) % 2 != 0 || (sum + target) < 0) return 0;
        int total = (sum+target)/2;
        vector<vector<int>>dp(n+1, vector<int>(total+1,0));
        for (int i =0;i<=n;i++)
        {
            dp[i][0] = 1;
        }
        for(int i =1;i<=n;i++)
        {
            for(int j = 0;j<=total;j++)
            {
                // not pick and pick 
                if (nums[i-1]>j) dp[i][j]=dp[i-1][j];
                else if (j>=nums[i-1]) dp[i][j]= dp[i-1][j] + dp[i-1][j-nums[i-1]];
            }
        }  
        return dp[n][total];      

    }
};