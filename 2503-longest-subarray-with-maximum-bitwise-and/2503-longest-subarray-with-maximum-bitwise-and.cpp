class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int cnt = 0;
        int total = 0;
        for (int i =0;i<n;i++)
        {
            if (nums[i]==maxi) 
            {
                cnt++;
                total = max(total,cnt);
            }
            else{
                cnt =0;
            }
        }
        return total ;
        
        
    }
};