#include <bits/stdc++.h> 

void dfs(int node,vector<int>adj[],vector<int>&vis,stack<int>&s){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it])
        dfs(it,adj,vis,s);
    }
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
vector<int>adj[v];
for(int i=0;i<edges.size();i++){
    int u=edges[i][0];
    int v=edges[i][1];
    adj[u].push_back(v);
}
stack<int>s;
vector<int>vis(v,0);
for(int i=0;i<v;i++){
    if(!vis[i])
    dfs(i,adj,vis,s);
}
vector<int>topo;
while(!s.empty()){
    int node=s.top();
    s.pop();
    topo.push_back(node);
}
return topo;
}
