class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int sum = nums[i];
            if(sum==k) ans ++;
            for(int j=i+1;j<n;j++)
            {
                sum+=nums[j];

                if(sum==k) ans++;
            }
        }
        return ans ; 

        
    }
};