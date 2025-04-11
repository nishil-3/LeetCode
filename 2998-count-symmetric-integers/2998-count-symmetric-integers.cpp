class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for (int i =low ;i<= high;i++)
        {
            string str = to_string(i);
            int n = str.length();
            if (n%2!=0) continue ;
            int half = n/2;
            int leftSum = 0, rightSum = 0;
            for (int i =0;i<half;i++)
            {
                leftSum +=str[i] - '0';
            }
             for (int j =half;j<n;j++)
            {
                rightSum +=str[j] - '0';
            }
            if (leftSum == rightSum) 
            {
                cnt ++;
            }
        }
        return cnt ;

        
    }
};