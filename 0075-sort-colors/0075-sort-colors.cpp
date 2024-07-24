class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero= 0,one=0,two=0;
        int n = nums.size();
        

        for (int i =0;i<nums.size();i++)
        {
            if (nums[i]==2) two++;
            if (nums[i]==1) one++;
            if (nums[i]==0) zero++;

        }
        for (int i=0;i<zero;i++)
        {
            nums[i]=0;

        }
        for(int i=zero;i<zero+one;i++)
        {
            nums[i]=1;
        }
        for(int i=zero+one;i<n;i++)
        {
            nums[i]=2;

        }
    
       
    }
};