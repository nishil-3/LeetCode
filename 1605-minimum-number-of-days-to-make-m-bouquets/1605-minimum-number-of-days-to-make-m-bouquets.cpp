class Solution {
public:
    bool possible(vector<int>& nums, int index, int m, int k) {
        int n = nums.size();
        int cnt = 0;
        int tcnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] <= index) {
                cnt++;
            } else {
                tcnt += (cnt / k);

                cnt = 0;
            }
        }
        tcnt += (cnt / k);
        if (tcnt >= m)
            return true;

        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
         long long val = m * 1ll * k * 1ll; 
        if (val > n)
            return -1;

        int ans = -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};