class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest =1, last_ele = INT_MIN, cnt = 0;
        if(n==0) return 0 ;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++)
        {
            if (nums[i]-1 == last_ele)
            {
                cnt++;
                last_ele =nums[i];
            }
            else if (nums[i]!=last_ele)
            {
                last_ele =nums[i];
                cnt= 1;
            }
            longest = max(longest, cnt);
        }
        return longest ; 
    }
};