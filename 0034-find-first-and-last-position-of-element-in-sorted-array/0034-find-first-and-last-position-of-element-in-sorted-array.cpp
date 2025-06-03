class Solution {
public:
int lower (vector<int>& nums, int target, int n)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid] == target )
        {
            ans = mid;
            high = mid -1;
        }
        else if (target > nums[mid])
        {
           low  =mid +1;
        }
        else {
            high = mid -1;
        }
    }
    return ans ;
}

int upper (vector<int>& nums, int target, int n)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid]== target )
        {
            ans = mid;
            low = mid +1;
        }
        else if (nums[mid] < target)
        {
            low = mid +1;

        }
        else{
            high = mid -1;
        }
    }
    return ans ;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int first = lower(nums,target,n);
        int second = upper(nums,target,n);
        return {first,second};

        
    }
};