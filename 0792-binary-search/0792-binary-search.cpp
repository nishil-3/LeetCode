class Solution {
public:
    int func(vector<int>& nums, int target, int low, int high) {
        if (low > high)
        {

            return -1;
        }
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {

            return mid;
        }
        else if (nums[mid] > target) {

            return func(nums, target, low, mid - 1);
        }

        return func(nums, target, mid + 1, high);
    }
    int search(vector<int>& nums, int target) {

        return func(nums, target, 0, nums.size() - 1);
    }
};