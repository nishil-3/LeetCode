class Solution {
public:
    int arrangeCoins(int n) {
        // using binary search

        int low = 1;
        int high = n;
        int ans = 0;
        long long mid=low+(high-low)/2;
        while (low <= high) {

            long long sumo = mid * (mid + 1) / 2;
            if (sumo <= n) {
                ans = mid;
                low = mid + 1;
            } else if (sumo > n) {
                high = mid - 1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
};