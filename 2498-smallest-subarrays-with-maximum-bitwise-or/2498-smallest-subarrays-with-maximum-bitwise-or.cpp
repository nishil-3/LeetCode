class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        /*
        minimum size ka subarray jiski bit ki value maximum ho, for example
        at index 2, 2 1 3 elements hai array mei
        || of 2 is 2
        or of 2 1 is 3
        or of 2 1 3 is 3
        maximum elements is 3 and but minimum usbarray chaiye that is 2,1 so 2
        same as next greater elemenst bas yaha elements check ho rahe hai
        */
       int n = nums.size();
       vector<int> ans(n);
       vector<int> result(32,-1);
       for(int i =n-1;i>=0;i--)
       {
        int farthest = i ;
        for(int j =0;j<32;j++)
        {
            if ((nums[i] >> j)&1)
            {
                result[j] = i; 
            }
            if (result[j]!=-1)
            {
                farthest = max(farthest, result[j]);
            }
        }
        ans[i] = farthest - i + 1;

       }
       return ans ;
    }
};