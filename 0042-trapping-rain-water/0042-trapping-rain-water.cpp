class Solution {

private:
    vector<int> findprefix(vector<int>& height, int& n) {
        vector<int> ans(n);
        ans[0] = height[0];
        for (int i = 1; i < n; i++) {
            ans[i] = max(ans[i - 1], height[i]);
        }
        return ans;
    }

    vector<int> findsuffix(vector<int>& height, int& n) {
        vector<int> ans(n);
        ans[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            ans[i] = max(ans[i + 1], height[i]);
        }
        return ans;
    }

public:
    int trap(vector<int>& height) {

        int n = height.size();
        int total = 0;
        vector<int> left_max = findprefix(height, n);
        vector<int> right_max = findsuffix(height, n);

        for (int i = 0; i < n; i++) {
            if (height[i] < left_max[i] && height[i] < right_max[i]) {
                total += (min(left_max[i], right_max[i]) - height[i]);
            }
        }
        return total;
    }
};