class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans ;
        bool flag ;
        for (int i =left;i<=right;i++)
        {
            flag = false;
            int num  =i ;
            while (num>0)
            {
                int s= num %10;
                if (s!=0 && i%s==0)
                {
                    flag  =true ;
                }
                else{
                    flag = false;
                    break ;
                }
                num=num/10;

           
            }
            if (flag) ans.push_back(i);
        }
        return ans  ;
        
    }
};