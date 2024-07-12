class Solution {
public:

int firstt (vector<int>& nums,int n, int target)
{
    int index= -1;
    int low =0;
    int high = n-1;
    while (low<=high )
    {
        int mid =(low+high)/2;
        if (target ==nums[mid])
        {
            index= mid;
            high = mid-1;
        }
        else if (target> nums[mid])
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return index ;
}

int secondd (vector<int>& nums,int n, int target)
{
    int index= -1;
    int low =0;
    int high = n-1;
    while (low<=high )
    {
        int mid =(low+high)/2;
        if (target ==nums[mid])
        {
            index= mid;
         low= mid+1;
        }
        else if (target> nums[mid])
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return index ;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();

        int first = firstt(nums,n,target);
        int second = secondd(nums,n,target);
        return {first,second};
    }
};