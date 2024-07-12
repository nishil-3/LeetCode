class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,count;
        for (i=0;i<haystack.length();i++)
        {
            count = 0;
            if (haystack[i]==needle[0])
            {
                for (int j=0;j<needle.length();j++)
                {
                    if (haystack[i+j]==needle[j])
                    {
                        count ++;
                    }
                    else {
                        break;
                    }
                }
            }
            if (count ==needle.length())
            {
                return i;
            }
        }
        return -1;

        
    }
};