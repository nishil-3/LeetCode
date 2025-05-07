class Solution {
public:
 bool isVowel(char ch) {
        return ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int l = 0;
        int r = 0;
        int maxi = 0;

        int cnt = 0;
        while (r <n)
        {
            if (isVowel(s[r])) cnt++;

            if (r - l +1 > k)
            {
                if(isVowel(s[l])) cnt--;
                l++;
            }
            r++;
            maxi = max(maxi, cnt);



        }
        return maxi ;

        
    }
};