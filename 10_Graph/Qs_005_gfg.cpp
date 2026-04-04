#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
  public:
    bool DetectCycle(int node , vector<vector<int>>&adj , vector<bool>&path , vector<bool>&visited){
        visited[node] =1;
        path[node] = 1;
        
        for(int i=0 ; i<adj[node].size();i++){
            
            if(path[adj[node][i]])
            return 1;
            
            
            if(visited[adj[node][i]])
            continue;
            
            if(DetectCycle(adj[node][i] , adj , path , visited))
            return 1;
        }
        
        path[node] =0;
        return 0;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        // convert edges list to adjacency list
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        vector<bool>path(V,0);
        vector<bool>visited(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i] && DetectCycle(i,adj,path,visited)){
                return 1;
            }
        }
        return 0;
        
    }
};

int main(){
    // gfg problem ---> Directed Graph Cycle
    // https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
    return 0;
}