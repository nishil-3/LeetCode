class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n =nums.size();
        int low = 0;
        int high = n-1;
        while (low<=high )
        {
            int mid = (low+high)/2;
            if (nums[mid]==target) return true;
            if (nums[mid]==nums[low] && nums[mid]==nums[high])
            // if (nums[low]==nums[high]) // wrong condition on test case [1,2,1]
            {
                low = low+1;
                high =high -1;
                continue ; 
            }

            // now we will check which side is sorted 

            if (nums[low]<=nums[mid] ) // left side is sorted
            {
                if(nums[low]<=target && target <=nums[mid])
                {
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }


            }
            else
             { // right side is sorted
            if (nums[mid]<=target && target <= nums[high])
            {
                low =mid+1;
            }
                else{
                    high =mid-1;

                }
        }

        }
        
        return false; // cannot find target , hence returning zero 
    }
};