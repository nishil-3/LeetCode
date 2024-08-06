class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==1) return true ; 
        int low = 1;
        int high = num -1;
        int ans = 0;
        while (low <= high) {
            long mid = (low + high) / 2;
            if (mid * mid <= num) {
                ans = mid;
                low = mid + 1;

            } else {
                high = mid - 1;
            }
        }
        if (ans * ans == num)
            return true;
        return false;
    }
};