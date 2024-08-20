class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // using set 
        set<int> st;
        int n = nums.size();
        if(n==0) return 0 ;
        

        for (auto it : nums) st.insert(it);
        int longest = 1;
        for(auto it : st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt = 1;
                int x = it;
                while (st.find(x+1)!=st.end())
                {
                    cnt = cnt +1;
                    x=x+1;
                }
            longest = max(longest, cnt);
            }
        }
        return longest ;
        
    }
};