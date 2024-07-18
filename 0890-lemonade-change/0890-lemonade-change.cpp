class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten =0;

        for (auto bill:bills )
        {
            if (bill==5)
            {
                five++;
            } else if ( bill ==10)
            {
                if (five==0)
                {
                    return false ;
                }
                ten++;
                five--;
            } else {
                if (ten>0 and five >0)
                {
                    ten-- ;
                    five--;
                }
                else if (five>=3)
                {
                    five-=3;
                }
                else{
                    return false;
                }
            }
            
        }
        return true ;
        
    }
};