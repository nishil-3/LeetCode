class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int cnt = 0;
        set<string> st(bannedWords.begin(),bannedWords.end());
        for (auto it : message)
        {
            if(st.find(it)!= st.end())
            {
               cnt++;
            }
            
        }
        if(cnt>= 2) return true ;

        return false ; 
        
    }
};