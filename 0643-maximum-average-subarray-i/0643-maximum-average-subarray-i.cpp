class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1) return nums[0];
        double maxi = INT_MIN;
        int left =0;
        int right = 0;
        double sum = 0;
        while (right <n)
        {
            sum += nums[right];
            if (right - left +1 < k) right ++;
            else if (right -left +1 == k)
            {
                maxi = max(maxi, sum);
                sum = (sum -nums[left]);
                left ++;
                right ++;
            }
        }
        return maxi / k;

        
    }
};