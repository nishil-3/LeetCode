class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        bool cnt = false;
        int len = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                cnt = true;
                len++;
            }
            else if(cnt) 
            {
                break ;
        }
    }
    return len ;
    }
};