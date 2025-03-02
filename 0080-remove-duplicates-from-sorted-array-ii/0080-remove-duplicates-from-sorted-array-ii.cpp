class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int j =0;

        for(int i =0;i<nums.size();i++)
        {
            if (mpp[nums[i]]<2)
            {
                nums[j]=nums[i];
                j++;
                mpp[nums[i]]++;
            }

        }
        return j;
        
        
    }
};