class Solution {
private:
    // To store the current time during traversal
    int timer = 1;
    
    /* Helper function to make DFS calls while 
    checking for bridges in the graph */
    void dfs(int node, int parent, vector<int> &vis, vector<int> adj[], 
             vector<int> &tin, vector<int> &low,
             vector<vector<int>> &bridges) {
        
        // Mark the node as visited
        vis[node] = 1;
        
        /* Time of insertion and the lowest time of 
        insert for node will be the current time */
        tin[node] = low[node] = timer;
        
        // Increment the current time
        timer++;
        
        // Traverse all its neighbors
        for (auto it : adj[node]) {
            
            // Skip the parent
            if (it == parent) continue;
            
            // If a neighbor is not visited
            if (vis[it] == 0) {
                
                // Make a recursive DFS call
                dfs(it, node, vis, adj, tin, low, bridges);
                
                /* Once the recursive DFS call returns, upate
                the lowest time of insertion for the node */
                low[node] = min(low[it], low[node]);

                /* If the lowest time of insertion of the 
                node is found to be greater than the 
                time of insertion of the neighbor */
                if (low[it] > tin[node]) {
                    
                    // The edge represents a bridge
                    bridges.push_back({it, node});
                }
            }
            
            // Else if the neighbor is already visited
            else {
                // Update the lowest time of insertion of the node
                low[node] = min(low[node], low[it]);
            }
        }
    }
public:

    // Function to identify the bridges in a graph
    vector<vector<int>> criticalConnections(int n,
         vector<vector<int>>& connections) {

        // Adjacency list
        vector<int> adj[n];
        
        // Add all the edges to the adjacency list
        for (auto it : connections) {
            int u = it[0], v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // Visited array
        vector<int> vis(n, 0);
        
        // To store the time of insertion (discovery time) of nodes
        vector<int> tin(n);
        
        // To store the lowest time of insert of the nodes
        vector<int> low(n);
        
        // To store the bridges of the graph
        vector<vector<int>> bridges;
        
        // Start a DFS traversal from node 0 with its parent as -1
        dfs(0, -1, vis, adj, tin, low, bridges);
        
        // Return the computed result
        return bridges;
    }
};