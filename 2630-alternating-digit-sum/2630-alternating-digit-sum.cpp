class Solution {
public:
    int alternateDigitSum(int n) {
        int k = n;
        vector<int> ans;
        while (k != 0) {
            int s = k % 10;
            ans.push_back(s);
            k = k / 10;
        }
        reverse(ans.begin(), ans.end());
       int sum = 0;
       for (int i =0;i<ans.size();i++)
       {
        if(i%2==0)
        {
            sum+=ans[i];

        }
        else sum-=ans[i];
       }
    return sum;
    }
};