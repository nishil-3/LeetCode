class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mpp;
        for (auto it : s) {
            mpp[it]++;
        }
        int n = s.size();
        int vov = 0;
        int con = 0;
        for (auto it : mpp) {
            if (it.first == 'a' || it.first == 'e' || it.first == 'i' ||
                it.first == 'o' || it.first == 'u') {
                vov = max(vov, it.second);
            } else {
                con = max(con,it.second);
            }
        }
        return vov+con ; 
    }
};