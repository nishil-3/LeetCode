class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
              vector<int> inDegree(n+1, 0);
        vector<int> outDegree(n+1, 0);
        for (int i = 0; i < trust.size(); i++) {
            int a = trust[i][0];
            int b = trust[i][1];
            inDegree[b]++;
            outDegree[a]++;
        }
        for (int i = 1; i <= n; i++) {
            if (inDegree[i] == n-1 && outDegree[i] == 0) {
               return i;
            }
        }
        return -1;
        
    }
};