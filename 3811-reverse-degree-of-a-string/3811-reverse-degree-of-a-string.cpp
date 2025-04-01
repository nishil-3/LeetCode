class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            int reversed_value = 'z' - s[i] + 1;
            sum += (reversed_value * (i + 1));
        }
        return sum;
    }
};