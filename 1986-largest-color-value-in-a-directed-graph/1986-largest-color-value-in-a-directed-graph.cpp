class Solution {
public:
    int dfs(int node, vector<vector<int>>& adjlist, string& colors,
            vector<vector<int>>& colorfreq, vector<bool>& visited,
            vector<bool>& instack, bool& hasccycle) {

        if (instack[node]) {
            hasccycle = true;
            return 0;
        }
        if (visited[node]) {
            return 0;
        }

        visited[node] = true;

        instack[node] = true;

        int idx = colors[node] - 'a';

        colorfreq[node][idx] = 1;

        for (int neighbour : adjlist[node]) {
            dfs(neighbour, adjlist, colors, colorfreq, visited, instack,
                hasccycle);
                   for (int i = 0; i < 26; ++i ){
            int extra = (i == idx) ? 1 : 0;
            colorfreq[node][i] =
                max(colorfreq[node][i], colorfreq[neighbour][i] + extra);
        }
        }
     
        instack[node] = false;
        return *max_element(colorfreq[node].begin(), colorfreq[node].end());
    }
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();
        vector<vector<int>> adjlist(n);
        for (auto& edge : edges) {
            adjlist[edge[0]].push_back(edge[1]);
        }
        vector<vector<int>> colorfreq(n, (vector<int>(26, 0)));
        vector<bool> visited(n,false), instack(n,false);
        bool hasccycle = false;
        int maxColorCount = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int currmax = dfs(i, adjlist, colors, colorfreq, visited,
                                  instack, hasccycle);
                maxColorCount = max(maxColorCount, currmax);
            }
        }
        return hasccycle ? -1: maxColorCount ;
    }
};