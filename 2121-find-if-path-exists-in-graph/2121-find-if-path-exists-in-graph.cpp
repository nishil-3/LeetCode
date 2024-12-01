class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector <int> adj[n];
        for(int i =0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visisted (n, false );
        queue <int> q;
        q.push(source);
        visisted[source]=true;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto it : adj[u])
            {
                if (visisted[it]==false)
                {
                    visisted[it]=true;
                    q.push(it);
                }
            }
        }
        return visisted[destination];
        
        
    }
};