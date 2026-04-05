#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// using DFS traversal:
class Solution {
  public:
  
    bool checkBip(int node , vector<vector<int>>&adj, vector<int>&colour){
        for(int j=0;j<adj[node].size();j++){
            if(colour[adj[node][j]] == -1){
                colour[adj[node][j]] = (colour[node]+1)%2;
                
                if(!checkBip(adj[node][j] , adj , colour))
                return 0;
            }
            else{
                if(colour[node]==colour[adj[node][j]])
                return 0;
            }
        }
        return 1;
    }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        vector<int>colour(V,-1);
        
        for(int i=0;i<V;i++){
            if(colour[i] == -1){
                colour[i] =0;
                if(!checkBip(i,adj,colour))
                return 0;
            }
        }
        return 1;
        
        
        
        
        
        
        
        
        
        
        
    }
};


// using BFS traversal:


class Solution {
  public:
  
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        vector<int>colour(V,-1);
        queue<int>q;

        for(int i=0;i<V;i++){
            if(colour[i] ==-1){
                q.push(i);
                colour[i] =0;
                
                while(!q.empty()){

                    int node = q.front();
                    q.pop();
                    for(int j=0;j<adj[node].size();j++){
                        if(colour[adj[node][j]] == -1){
                            colour[adj[node][j]] = (colour[node]+1)%2;
                            q.push(adj[node][j]);
                        }
                        else{
                            if(colour[node] == colour[adj[node][j]])
                            return 0;
                        }
                    }
                }
            }
        }
        return 1;
        
        
    }
};
    
int main(){
    return 0;
}