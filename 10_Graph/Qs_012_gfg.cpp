#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        
        vector<int>adj[V];
        for(int i=0 ; i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>dist(V,-1);
        vector<bool>visited(V,0);
        
        queue<int>q;
        q.push(src);
        dist[src] = 0;
        visited[src] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int j=0 ; j<adj[node].size();j++){
                if(visited[adj[node][j]])
                continue;
                
                visited[adj[node][j]] = 1;
                q.push(adj[node][j]);
                dist[adj[node][j]] = dist[node] + 1;
            }
        }
        
        return dist;
    }
};


int main(){
    // gfg problem --- > Shortest Path in Undirected Graph
    // https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
    return 0;
}