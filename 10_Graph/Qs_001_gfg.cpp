#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int>q;
        int n = adj.size();
        vector<bool>visited(n,0);
        q.push(0);
        visited[0] = 1;
        
        vector<int>ans;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(int j=0 ; j<adj[node].size();j++){
                if(!visited[adj[node][j]]){
                    visited[adj[node][j]] =1;
                    q.push(adj[node][j]);
                }
            }
            
        }
        return ans;
    }
};


int main(){
    // Gfg problem ---> BFS of graph
    
    // https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?page=1&difficulty[]=0&category[]=Graph&sortBy=submissions
    return 0;
}