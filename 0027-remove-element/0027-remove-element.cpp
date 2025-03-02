class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for (auto it : nums) {
            if (it != val) {
                ans.push_back(it);
            }
        }
        nums.clear();
        int i = 0;

        for (auto it : ans) {
            nums.push_back(it);
        }
        return nums.size();
    }
};