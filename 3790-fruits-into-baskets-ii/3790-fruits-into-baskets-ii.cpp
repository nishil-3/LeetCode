class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        vector<bool> check(n,false);
        int cnt =0;
        for(int i =0;i<n;i++)
        {
            int fruit = fruits[i];
                bool ans = false ;
            for(int j=0;j<n;j++)
            {
                if(fruit<=baskets[j]&& check[j]==false)
                {
                    ans = true ;  
                    check[j] =true;
                    break;
                }
            }
            if(ans==false)cnt++;
        }
        return cnt ;
        
    }
};