class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // o of log n would be binary search.
        // eliminate the half
        // sorted 
        // seach for the lowest element than the target and insert at that position 

        int n = nums.size();
        int low = 0;
        int ans  =n;
        int high = n-1;
        while (low<=high )
        {
            int mid = (low+high)/2;
            if (nums[mid]>= target)
            {
                ans = mid ;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans ;

        
    }
};