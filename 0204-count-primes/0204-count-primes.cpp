class Solution {
public:
    int countPrimes(int n) {
        // using Sieve of Eratosthenes
        int arr[n+1] ;
        for(int i =0;i<n;i++)
        {
            arr[i]=1;
        }
        int cnt = 0;
        for(long long i=2;i<=n;i++)
        {
            if (arr[i]==1)
            {
                cnt++;

                for (long long val = i*i;val<=n;val+=i)
                {
                    arr[val]= 0;
                }
            }
        }
        return cnt ;
        
    }
};