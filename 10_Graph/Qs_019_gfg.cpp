#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// User function Template for C++

class Solution {
  public:
  
    void DFS(int node , vector<int>adj[] , vector<bool>&visited){
        visited[node] =1;
        for(int j=0 ;j<adj[node].size();j++){
            if(!visited[adj[node][j]])
            DFS(adj[node][j] , adj , visited);
        }
    }
    int isCircle(vector<string> &arr) {
        // code here
        
        // adjacency List
        int N = arr.size();
        
        vector<int>adj[26];
        
        vector<int>InDeg(26,0);
        vector<int>OutDeg(26,0);
        
        for(int i=0;i<N ; i++){
            string temp = arr[i];
            
            int u = temp[0] - 'a';
            int v = temp[temp.size()-1] -'a';
            
            adj[u].push_back(v);
            OutDeg[u]++;
            InDeg[v]++;
        }
        
        for(int i=0 ; i<26;i++){
            if(InDeg[i] != OutDeg[i])
            return 0;
        }
        
        vector<bool>visited(26,0);
        DFS(arr[0][0]-'a' , adj , visited);
        
        for(int i=0 ; i<26 ; i++){
            if(InDeg[i] && !visited[i])
            return 0;
        }
        
        return 1;
        
        
    }
};
    
int main(){
    // gfg problem --- > Circle of strings
    // https://www.geeksforgeeks.org/problems/circle-of-strings4530/1?page=1&difficulty%5B%5D=1&category%5B%5D=Graph&sortBy=submissions

    return 0;
}