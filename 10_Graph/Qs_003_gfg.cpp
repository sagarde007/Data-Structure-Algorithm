#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
// DFS Approach :-
class Solution {
  public:
    bool CycleDetect(int node , int parent , vector<vector<int>>&edges , vector<bool>&visited){
        visited[node] = 1;
        
        for(int j=0 ; j<edges[node].size();j++){
            if(parent == edges[node][j])
            continue ;
            
            if(visited[edges[node][j]] == 1)
            return 1;
            
            if(CycleDetect(edges[node][j] , node , edges , visited))
            return 1;
        }
        
        return 0;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        // convert edge list to adjacency list 
        vector<vector<int>>adj(V);
        for(int i=0 ; i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        
        vector<bool>visited(V,0);
        // visit all the node 
        for(int i=0 ; i<V ; i++){
            if(!visited[i] && CycleDetect(i,-1,adj , visited)){
                return 1;
            }
        }
        return 0;
        
    }
};


//  BFS Approach :-
class Solution {
  public:
    bool CycleDetect(int vertex , vector<vector<int>>&adj , vector<bool>&visited){
        
        queue<pair<int , int>>q;
        visited[vertex] = 1;
        q.push(make_pair(vertex ,-1));
        
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(int j=0 ; j<adj[node].size();j++){
                if(parent == adj[node][j])
                continue;
                
                if(visited[adj[node][j]])
                return 1;
                
                visited[adj[node][j]] =1;
                q.push(make_pair(adj[node][j],node));
            }
        }
        return 0;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        // convert edge list to adjacency list 
        vector<vector<int>>adj(V);
        for(int i=0 ; i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        
        vector<bool>visited(V,0);
        // visit all the node 
        for(int i=0 ; i<V ; i++){
            if(!visited[i] && CycleDetect(i ,adj , visited)){
                return 1;
            }
        }
        return 0;
        
    }
};


int main(){
    // gfg problem ---> Undirected Graph Cycle Detection
    // https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
    return 0;
}