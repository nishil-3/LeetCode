class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (n,-1);
        for (int i =0;i<n;i++)
        {
            int cur  =nums[i];
            for(int j =1;j<n;j++)
            {
                int index = (i+j)%n;
                if (cur < nums[index])
                {
                    ans[i]= nums[index];
                    break ;

                }

            }

        }
        return ans ;
        
        
    }
};