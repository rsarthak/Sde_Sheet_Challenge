
void dfs(int node,vector<int>&vis, vector<int>adj[],vector<int>&temp){
    vis[node]=1;
temp.push_back(node);
for(auto it:adj[node]){
  if (!vis[it]) {
    dfs(it, vis, adj, temp);
  }
}
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
vector<vector<int>>ans;
vector<int>adj[V];
for(int i=0;i<edges.size();i++){
    int u=edges[i][0];
    int v=edges[i][1];
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<int>vis(V,0);
for(int i=0;i<V;i++){
  if (!vis[i]) {
    vector<int> temp;
    dfs(i, vis, adj, temp);
    ans.push_back(temp);
  }
}
return ans;
}
