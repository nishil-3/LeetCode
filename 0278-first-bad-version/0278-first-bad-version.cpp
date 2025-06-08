// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // for (int i=1;i<=n;i++)
        // {
        //     if (isBadVersion(i)==true ) return i;
        // }
        // return -1;
        int left = 1;
        int right = n;
        int ans = -1;
        while (left <= right)
        {
            int mid = left + (right - left )/2;
            if (isBadVersion(mid))
            {
                ans = mid ;
                right  =mid - 1;
            }
            else if (isBadVersion(mid) == false )
            {
               left = mid +1;
            }
            else{
               right = mid -1 ;
            }
            
        }
        return ans ;
    }
};