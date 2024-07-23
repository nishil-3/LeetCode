class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> a;
        vector <int> b;
        int n = nums.size();
        for (int i =0;i<n;i++)
        {
            if (nums[i]>0)
            {
                a.push_back(nums[i]);
            }
            else{
                 b.push_back(nums[i]);
            }
        }
        nums.clear();
        int i =0 ;
        int j = 0;

  while (j<n/2)
  {
    nums.push_back(a[i]);
    i++;
    nums.push_back(b[j]);
    j++;



  }

    return nums;
    }
};