

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        
        int n = adj.size();
        
        // create queue,visited array,result array to store the graphs(nodes)
        queue<int> q;
        vector<int> vis(n,0);
        vector<int> result;
        
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            result.push_back(node);
            for(auto connectNodes : adj[node]){
                if(vis[connectNodes] == 0){
                    q.push(connectNodes);
                    vis[connectNodes] = 1;
                }
            }
        }
        return result;
    }
};