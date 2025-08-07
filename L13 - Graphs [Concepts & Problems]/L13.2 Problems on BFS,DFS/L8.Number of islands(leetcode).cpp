


#include <bits/stdc++.h>
using namespace std;
// Matrix Traversal (Patterns)
// - NOT GONNA TO OUT OF BOUND OF MATRIX
// - NOT ALREADY VISITED CURRENT_CELL
// - HAVE LAND (1'S)
// - CREATE [ROW,COL] DIRECTION-4 ON PAPER [ROW+1,COL-1] THIS WAY - You may assume all four edges of the grid are all surrounded by water.
// - APPLY Bfs/Dfs algorithm to count all islands into matrix

class Solution {
private:
   void BFS(int row, int col,vector<vector<char>>& grid,vector<vector<int>> & visited){

    // size of matrix 
        int n = grid.size();
        int m = grid[0].size();
    
    // push into queue, mark visited into vistiedMatrix
        queue<pair<int,int>> q;
        q.push({row,col});
        visited[row][col] = 1;

    // island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
      // 4-direction of matrix
        int delrow[4] = {-1,0,1,0};
        int delcol[4] = {0,1,0,-1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int direction = 0; direction < 4; direction++){
                 int newrow = delrow[direction] + row;
                 int newcol = delcol[direction] + col;

                if(newrow >= 0 && newrow < n 
                    && newcol >= 0 && newcol < m 
                    && visited[newrow][newcol] == 0 && grid[newrow][newcol] == '1'){
                   // valid
                   // push into queue
                   // mark visited
                    q.push({newrow,newcol});
                    visited[newrow][newcol] = 1;
                 }
            }
            // completed 4-direction one time
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int NumberIslands = 0;

        vector<vector<int>> visited(n,vector<int>(m,0));

        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                // current-cell have '1' and not already visited this cell
                if(grid[row][col] == '1' && visited[row][col] == 0){
                    BFS(row,col,grid,visited);
                    NumberIslands++;
                }
            }
        }
        return NumberIslands;
    }
};