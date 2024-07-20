class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length ();
        int maxi = 0;
        for (int i =0;i<n;i++)
        {
        
           char hash[256]={0};
            for (int j=i;j<n;j++)
            {
                if (hash[s[j]]==1)
                {break ;
                    
                } 

                int len = j-i+1;
                maxi = max(len,maxi); 

                hash[s[j]]=1;

            }
        }
        return maxi;
        
    }
};