class Solution {
public:
    int arrangeCoins(int n) {
        int num = n ;
        int ans = 0;
        int cnt = 0;

        for (int i =1;i<=n;i++)
        {
            if (num-i>=0)
            {
                ans = num-i;
                cnt++;
            }
            else{
              
                break ; 
            }
            num = ans ; 

        }
        return cnt ; 
    }
};