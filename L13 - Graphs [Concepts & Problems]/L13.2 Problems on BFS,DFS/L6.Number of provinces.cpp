



// Step1- convert matrix into adjlist
// Step2- apply Conncect Compounts concpets here, BFS algorithm to count all connected nodes

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
   void BFS(int currentNode,vector<int>& visited,vector<int> adj[]){
        
      queue<int> q;
      q.push(currentNode);
      visited[currentNode] = 1;

      while(!q.empty()){
          int currentNode = q.front();
          q.pop();

          for(auto & nextNode: adj[currentNode]){
             if(!visited[nextNode]){
                q.push(nextNode);
                visited[nextNode] = 1;
             }
          }
      }
   }
   // clean-code
   // short-dfs-algorithm
   void DFS(int node,vector<int>& visited, vector<int> adj[]){
        visited[node] = 1;
        for(auto &it : adj[node]){
            if(!visited[it]){
                DFS(it,visited,adj);
            }
        }
   }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
       int m = isConnected[0].size();

       int V = n;
       vector<int> adj[V+1];
    // step-1 
       for(int row = 0; row < n; row++){
         for(int col = 0; col < m; col++){
            // have connection 
            if(isConnected[row][col] == 1 && row != col){
                adj[row].push_back(col);
                adj[col].push_back(row);
            }
         }
       }

     // step-2 
     vector<int> visited(n,0);
     int NumberProvince = 0;
     for(int node = 0; node < n; node++){
        if(visited[node] == 0){
            BFS(node,visited,adj);
            NumberProvince++;
        }
     }
     return NumberProvince;
    }
};