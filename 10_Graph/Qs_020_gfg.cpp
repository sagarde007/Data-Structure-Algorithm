#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    

class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<pair<int,int>>> adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            adj[u].push_back({v,weight});
            adj[v].push_back({u,weight});
        }
        // pair<int , pair<int,int>>
        
        priority_queue<pair<int , pair<int,int>>, vector<pair<int , pair<int,int>>> , greater<pair<int , pair<int,int>>>>pq;
        
        vector<bool>IsMST(V ,0);
        vector<int>parent(V);
        
        int cost =0 ;
        pq.push({0,{0,-1}});
        
        while(!pq.empty()){
            
            int wt = pq.top().first;
            int node = pq.top().second.first;
            int par = pq.top().second.second;
            pq.pop();
            
            if(!IsMST[node]){
                IsMST[node] =1;
                cost += wt;
                parent[node] = par;
                
                for(int j=0 ; j<adj[node].size();j++){
                    
                    int adjNode = adj[node][j].first;
                    int edgeWt = adj[node][j].second;
                    
                    if(!IsMST[adjNode]) {
                        pq.push({edgeWt , {adjNode , node}});
                    }
                }
            }
        }
        return cost;
    }
};

int main(){
    // gfg problem ---> Minimum Spanning Tree
    // https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

    return 0;
}