class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low =0 , high = n-1;
        int ans = INT_MAX;
        while (low<=high)
        {
            int mid = (low+high)/2;
            if (nums[low]<=nums[mid])
            {
                // left half is sorted 
            if (nums[low]<ans) ans = nums[low];
                low = mid+1;

            }
            else{
                if (nums[mid]<=nums[high])
                {
                    ans = nums[mid];

                }
                high = mid-1;
                

                // right half is sorted 

            }
        } return ans ; 
        
    }
};