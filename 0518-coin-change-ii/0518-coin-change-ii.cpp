class Solution {
public:
    int change(int amount, vector<int>& coins) {
       int n = coins.size();
        // no of ways man raha hai
        vector<vector<unsigned long long>> t(n+1, vector<unsigned long long>(amount+1, 0));


        for(int i=0;i<n+1;i++) {
            t[i][0] = 1;
        }

        for(int i=1;i<n+1;i++) {
            for(int j=0;j<amount+1;j++) {
                if(coins[i-1] <= j) {
                    t[i][j] = t[i][j - coins[i-1]] + t[i-1][j];  // infinite hai
                }
                else {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return static_cast<int>(t[n][amount]);
   
    
        
    }
};