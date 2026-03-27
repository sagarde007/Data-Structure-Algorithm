#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    

class Solution {
  public:
  
    void DFSGraph(int node , vector<vector<int>>& adj , vector<int>&ans , vector<bool>&visited){
        visited[node] = 1;
        ans.push_back(node);
        
        for(int j=0;j<adj[node].size();j++){
            if(!visited[adj[node][j]]){
                DFSGraph(adj[node][j] , adj , ans , visited);
                
            }
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>ans;
        int v = adj.size();
        vector<bool>visited(v,0);

        DFSGraph(0,adj,ans,visited);
        
        return ans;
        
    }
};


int main(){
    // Gfg problem ---> DFS of Graph

    https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?page=1&difficulty[]=0&category[]=Graph&sortBy=submissions

    return 0;
}