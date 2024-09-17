class Solution {
public:

    void func(int open,int close, int n, vector<string>&ans, string s )
    {
        if(close+open == 2*n && open==close)
        {
            ans.push_back(s);
            return;
        }
        if(open<n)
        {
            func(open+1,close, n , ans, s+'(');
        }
        if(close<open)
        {
             func(open,close+1, n , ans, s+')');

        }
    }
    vector<string> generateParenthesis(int n) {

        vector<string> ans ;

        func(0,0,n,ans,"");

        return ans ; 
        
    }
};