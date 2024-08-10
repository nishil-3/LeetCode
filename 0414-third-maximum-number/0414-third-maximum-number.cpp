class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        for (auto ss : st)
            ans.push_back(ss);
        int n = ans.size();
        sort(ans.begin(), ans.end());
        if (n == 1)
            return ans[0];
        if (n == 2)
            return ans[1];
        if (n >= 3)
            return ans[n - 3];
        return 1;
    }
};