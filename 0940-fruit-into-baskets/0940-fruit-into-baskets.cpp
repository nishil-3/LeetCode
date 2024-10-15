class Solution {
public:
    int solve(vector<int> nums) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int maxlen = 0;
        unordered_map<int, int> mpp;

        while (r < n) {
            mpp[nums[r]]++;

            if (mpp.size() > 2) {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0) {
                    mpp.erase(nums[l]);
                }
                l++;
            }
            if (mpp.size() <= 2) {
                maxlen = max(maxlen, r -  l + 1);
            }
            r++;
        }
        return maxlen;
    }
    int totalFruit(vector<int>& fruits) { return solve(fruits); }
};