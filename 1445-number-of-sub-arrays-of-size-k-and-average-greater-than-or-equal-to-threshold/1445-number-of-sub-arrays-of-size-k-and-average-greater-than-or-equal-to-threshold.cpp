class Solution {
public:
bool checho (int sum, int avg, int k )
{
    if (sum/k >= avg) return true ;
    return false ;
}
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n  = arr.size();
        int i =0;
        int j = 0;
        int cnt = 0;
        int sum =0;
        while (j<n)
        {
            sum+= arr[j];
            if (j-i+1 < k) j++;
            else if (j-i+1 == k)
            {
                if (checho(sum,threshold,k))
                {
                    cnt++;
                }
                sum -=arr[i];
                i++;
                j++;
           

            }

        }
return cnt;
        
    }
};