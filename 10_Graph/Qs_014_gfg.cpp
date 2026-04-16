#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        bool flag = 0;
        vector<int>dist(V,1e8);
        dist[src] = 0;
        int e = edges.size();
        
        for(int j=0 ; j<V-1;j++){
            
            for(int i=0 ; i<e;i++){
                
                int u = edges[i][0];
                int v = edges[i][1];
                int wt = edges[i][2];
                
                if(dist[u] == 1e8){
                    continue;
                }
                
                if(dist[u] + wt < dist[v]){
                    flag =1;
                    dist[v] = dist[u] +wt;
                }
            }   
            if(!flag)
            return dist;
        }
        
        
        for(int i=0 ; i<e;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            if(dist[u] == 1e8){
                continue;
            }
            
            if(dist[u] + wt < dist[v]){
                vector<int>ans;
                ans.push_back(-1);
                return ans;
            }

        }
        return dist;
    }
};


int main(){
    // gfg problem ---> Bellman-Ford
    // https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1
    return 0;
}