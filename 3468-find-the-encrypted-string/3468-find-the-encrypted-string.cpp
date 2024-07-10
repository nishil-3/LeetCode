class Solution {
public:
    string getEncryptedString(string s, int k) {
        int q = k % s.size(); 
        reverse(s.begin(), s.begin()+q);
        reverse(s.begin()+q, s.end());
        reverse(s.begin(), s.end());

return s;
        
    }
};