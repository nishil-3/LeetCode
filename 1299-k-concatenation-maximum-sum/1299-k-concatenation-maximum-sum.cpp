#define MOD 1000000007
class Solution {
public:

    long long kadane(vector<int>& arr) {
        long long maxsum = 0, currentsum = 0;
        for (int num : arr) {
            currentsum = max((long long)num, currentsum + num);
            maxsum = max(maxsum, currentsum);
        }
        return maxsum;
    }
    int kConcatenationMaxSum(vector<int>& arr, int k) {

        long long maxans = kadane(arr);
        if (k == 1) {
            return maxans % MOD;
        }

        vector<int> doubleans = arr;
        doubleans.insert(doubleans.end(), arr.begin(), arr.end());
        long long maxdouble = kadane(doubleans);
        long long totalsum = accumulate(arr.begin(), arr.end(), 0LL);
        if (totalsum > 0) {
            long long result = maxdouble + (k - 2) * totalsum;
            return result % MOD;
        }
        return maxdouble % MOD;
    }
};