class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even ;
        for(auto it : nums )
        {
            if (it %2==0) even.push_back(it);
            else odd.push_back(it);
        }
        vector<int> ans ;
        int l=0;
        int r= 0;
        while (ans.size()!= nums.size())
        {
            ans.push_back(even[l]);
            l++;
            ans.push_back(odd[r]);
            r++;
        }
        return ans ;
        
    }
};