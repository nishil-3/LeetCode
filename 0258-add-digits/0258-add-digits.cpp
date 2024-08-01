class Solution {
public:
    int addDigits(int num) {
    int n = num;
    int cnt= n;


    while (n>9)
    {
        cnt=0;
 while (n>0)
    {
        int s = n%10;
       cnt+=s;
        n=n/10;

    }
    n=cnt;
    }

    return cnt;
        
    }
};