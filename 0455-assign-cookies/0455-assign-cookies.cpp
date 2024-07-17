class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,r=0;
        int ans =0;
        while (r<g.size() && l<s.size() )
        {
            if(g[r]<=s[l])
            {
ans++;
l++;
                r = r+1;
            }
            else{
                l = l+1;
            }
           
        }
        return ans;
        
        
    }
};