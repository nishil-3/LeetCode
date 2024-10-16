class Solution {
public:
    int characterReplacement(string s, int k) {
        // generate all the subarrays 
        int maxfreq = 0;
        int maxlen = 0;
        for (int i =0;i<s.size();i++)
        {
            int hash [26] = {0};
            for(int j =i;j<s.size();j++)
            {
                hash [s[j]-'A']++;
                maxfreq = max(maxfreq, hash [s[j]-'A']);
                int change = (j-i+1) - maxfreq;

                if (change <= k)
                {
                    maxlen = max(maxlen, j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return maxlen ;
        
    }
};