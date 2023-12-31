bool dfs_isCycle(vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &dfsVisited, int node){
  // Base Case
  if(visited[node]) return false;
  visited[node] = true;
  bool ans = false;
  for(int u : adj[node]){
    if(visited[u]){
      if(dfsVisited[u]) return true;
      else continue;
    }
    else{
      dfsVisited[u] = true;
      ans = ans || dfs_isCycle(adj, visited, dfsVisited, u);
      if(ans) return ans;
      dfsVisited[u] = false;
    }
  }
  return ans;
}

int detectCycleInDirectedGraph(int n, vector<pair<int,int>> &edges) {
  // DFS Traversal + Visited + DFS Visited Information
  // Time Complexity: O(V + E)
  // Space Complexity: O(V + E)
  // Build the adj. list
    vector<vector<int>> adj(n + 1);
    for(auto edge : edges){
        adj[edge.first].push_back(edge.second);
    }
    // Visited array and DFS Visited array
    vector<bool> visited(n + 1, false);
    vector<bool> dfsVisited(n + 1, false);
    // DFS 
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
          dfsVisited[i] = true;
          if(dfs_isCycle(adj, visited, dfsVisited, i)) return 1;
          dfsVisited[i] = false;
        }
    }
    return 0;
}
