class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
          int first = nums[i];
          int more = target - first ;
          if (mpp.find(more)!=mpp.end())
          {
            return {mpp[more],i };
          }
          mpp[first] = i;
        }
        return {-1,-1};
    }
};