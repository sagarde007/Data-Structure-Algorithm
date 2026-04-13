#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
// User function Template for C++
class Solution {
  public:
    void DFS(int node ,vector<pair<int,int>>adj[] , stack<int>&s , vector<bool>&visited){
        visited[node] = 1;
        for(int j=0 ; j<adj[node].size();j++){
            if(!visited[adj[node][j].first])
            DFS(adj[node][j].first , adj , s , visited);
            
        }
        s.push(node);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        
        // create adjacency list
        
        vector<pair<int,int>>adj[V];
        for(int i=0;i<E;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            adj[u].push_back(make_pair(v,weight));
        }
        
        // topological Sort
        stack<int>s1;
        vector<bool>visited(V,0);
        DFS(0 , adj , s1 , visited);
        vector<int>dist(V,INT_MAX);
        
        dist[0] = 0;
        
        // stack empty
        while(!s1.empty()){
            int node = s1.top();
            s1.pop();
            for(int i=0;i<adj[node].size();i++){
                int neighbour = adj[node][i].first;
                int weight = adj[node][i].second;
                dist[neighbour] = min(dist[neighbour] , weight+dist[node]);
            }
        }
        
        for(int i=0 ; i<V;i++){
            if(dist[i] == INT_MAX)
            dist[i] = -1;
        }
        return dist;
        
    }
};


int main(){
    // gfg problem --- > Shortest path in Directed Acyclic Graph
    // https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1
    return 0;
}