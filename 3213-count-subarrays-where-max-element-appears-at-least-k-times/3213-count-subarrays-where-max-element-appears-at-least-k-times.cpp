class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         int maxEl = *max_element(nums.begin(), nums.end());
        int l = 0, maxFound = 0, n = nums.size();
        long long count = 0;

        for (int r = 0; r < n; ++r) {
            if (nums[r] == maxEl) maxFound++;

            while (maxFound == k) {
                count += n - r;
                if (nums[l] == maxEl) maxFound--;
                l++;
            }
        }

        return count;
    }
};