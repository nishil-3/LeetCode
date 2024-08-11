class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    vector <int> asn ;
    for (int i =0;i<nums.size();i++)
    {
        if (nums[i]!=val) asn.push_back(nums[i]);
    }
    nums.clear();
    for(auto ss: asn)
    {
        nums.push_back(ss);
    }
        return nums.size();

    }
};