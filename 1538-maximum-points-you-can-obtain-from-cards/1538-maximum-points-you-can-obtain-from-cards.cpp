class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int lsum =0;
        int rsum =0;
        int maxsum= 0;
        int right  =n-1;

        for (int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];

        }
        maxsum=lsum;
        for (int i = k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[right];
            maxsum= max(maxsum, lsum+rsum);
            right--;
        }
     

        return maxsum;
    }
};