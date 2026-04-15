#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int , int>>adj[n+1];
        for(int i=0;i<m;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            
            adj[u].push_back({v,weight});
            adj[v].push_back({u,weight});
            
        }
        
        vector<bool>explore(n+1 , 0);
        vector<int>dist(n+1 , INT_MAX);
        vector<int>parent(n+1 , -1);
        
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        p.push({0,1});
        dist[1] =0;
        
        while(!p.empty()){
            int node = p.top().second;
            p.pop();
            if(explore[node])
            continue;
            
            explore[node] = 1;
            
            for(int j=0 ; j<adj[node].size();j++){
                int neighbour = adj[node][j].first;
                int weight = adj[node][j].second;
                
                if(!explore[neighbour] && dist[node]+weight < dist[neighbour]){
                    dist[neighbour] = dist[node] + weight;
                    p.push({dist[neighbour] , neighbour});
                    parent[neighbour] = node;
                }
            }
        }
        vector<int>path;
        if(parent[n] == -1){
            path.push_back(-1);
            return path;
        }
        int dest = n;
        while(dest != -1){
            path.push_back(dest);
            dest = parent[dest];
        }
        path.push_back(dist[n]);
        reverse(path.begin() , path.end());
        return path;
    }
};  

int main(){
    // gfg problrm ---> Shortest Path in an Undirected Graph
    // https://www.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1
    return 0;
}