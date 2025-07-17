class Solution {
public:
    bool check(vector<int>& nums, int index, int target,vector<vector<int>>& dp) {
        if (target == 0)
            return true;
        if (index == 0)
            return nums[0] == target;
        // pick and not pick
        if(dp[index][target]!=-1) return dp[index][target];
        bool notpick = check(nums, index - 1, target,dp);
        bool pick = false;
        if (target >= nums[index]) {
            pick = check(nums, index - 1, target - nums[index],dp);
        }
        return dp[index][target] = pick || notpick;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (auto it : nums)
            sum += it;
        if (sum % 2 == 1)
            return false;
            int k = sum/2;
            vector<vector<int>> dp(n,vector<int>(k+1,-1));
        return check(nums, n - 1, k,dp);
    }
};