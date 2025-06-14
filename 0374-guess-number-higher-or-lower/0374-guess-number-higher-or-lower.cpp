/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) { 
        int left  =0;
        int right = n;
        while (left <= right)
        {
           long mid = left+(right-left)/2;
            int number = guess(mid);
            if ( number == 0)
            {
                return mid ;
            }
            else if (number == -1)
            {
                right = mid -1;
            }
            else if (number == 1)
            {
                left = mid +1 ;
            }
            {

            }
        }
        return -21 ;
        
        
    }
};