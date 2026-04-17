#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        // Code here
        int n = dist.size();
        // for(int i=0 ; i<n;i++){
        //     for(int j=0 ; j<n;j++){
        //         if(dist[i][j] == -1){
        //             dist[i][j] = 1e8;
        //         }
        //     }
        // }
        
        // floyd warshall algo
        for(int k=0 ; k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dist[i][k] == 1e8 || dist[k][j] == 1e8)
                    continue;
                    
                    dist[i][j] = min(dist[i][j] , dist[i][k] + dist[k][j]);
                }
            }
        }
        
        // for(int i=0 ; i<n;i++){
        //     for(int j=0 ; j<n;j++){
        //         if(dist[i][j] == 1e8){
        //             dist[i][j] = -1;
        //         }
        //     }
        // }
    }
};

int main(){
    
    // gfg problem ---> Floyd Warshall
    // https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
    return 0;
}