

#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
  void dfs(int node, vector<int>& vis, vector<int> & result, vector<vector<int>>& adj){
      vis[node] = 1;
      result.push_back(node);
      
      for(auto nextNodes : adj[node]){
          if(vis[nextNodes] == 0){
              dfs(nextNodes,vis,result,adj);
          }
      }
  }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        
        int V = adj.size();
        vector<int> result;
        vector<int> vis(V,0);
        
        for(int node = 0; node < V; node++){
            if(vis[node] == 0){
                dfs(node,vis,result,adj);
            }
        }
        
        return result;
    }
};