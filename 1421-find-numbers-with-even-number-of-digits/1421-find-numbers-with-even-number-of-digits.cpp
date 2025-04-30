class Solution {
public:
bool check (int digit )
{
    int cnt = 0;
    while (digit != 0)
    {
        int s = digit %10;
        digit /=10;
        cnt ++;
    }
    if (cnt%2==0) return true ;
    return false ;
}
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i =0;i<nums.size();i++)
        {
            if (check(nums[i])) cnt++;
        }
        return cnt ;
        
    }
};