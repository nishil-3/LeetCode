class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int left = 0;

        int right  =n-1;
        while (left <= right)
        {
            int mid = (left +right)/2;
            if (n-mid == citations [mid] )
            {
                return citations[mid];
            }
            else if(n-mid > citations [mid]){
                left  =mid +1;
            }
            else {
                right = mid -1;
            }
        }
       return n-left;
        
    }
};