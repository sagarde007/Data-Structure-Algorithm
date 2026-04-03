#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        
        // convert edge list to adjacency list 
        vector<vector<int>>adj(V);
        for(int i=0 ; i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            
            adj[u].push_back(v);
        }
        
        
        
        vector<int>ans;
        vector<int>indegree(V,0);
        
        for(int i=0;i<V;i++){
            for(int j=0 ; j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }
        
        
        queue<int>q;
        for(int i=0;i<V;i++){
            if(!indegree[i])
            q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(int j=0;j<adj[node].size();j++){
                indegree[adj[node][j]]--;
                if(indegree[adj[node][j]]==0)
                q.push(adj[node][j]);
            }
        }
        
        return ans;
    }
};
    
int main(){
    // gfg problem ---> Topological Sort
    // https://www.geeksforgeeks.org/problems/topological-sort/1
    return 0;
}