class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int> ans;
        map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }
        int n = nums.size() / 3;
        for (auto it : mp) {
            if (it.second > n) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};