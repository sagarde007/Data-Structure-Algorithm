#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void DFS(int node , vector<int>adj[] , vector<bool>&visited){
    visited[node] = 1;

    for(int j=0;j<adj[node].size();j++){
        if(!visited[adj[node][j]]){
            DFS(adj[node][j] , adj , visited);
        }
    }
}

int IsEulerCircuit(int V , vector<int>adj[]){
    vector<int>Deg(V,0);
    int Odd_deg =0;
    for(int i=0;i<V;i++){
        Deg[i] = adj[i].size();

        if(Deg[i] % 2){
            Odd_deg++;
        }
    }

    if(Odd_deg != 2 && Odd_deg != 0)
    return 0;

    vector<bool>visited(V,0);
    for(int i =0;i<V;i++){
        if(Deg[i]){
            DFS(i , adj , visited);
            break;
        }
    }

    for(int i=0;i<V;i++){
        if(Deg[i] && !visited[i])
        return 0;
    }

    if(Odd_deg == 0)
    return 2;

    else
    return 1;
}
    
int main(){
    // gfg problem ---> Euler Path and Euler Circuit
    return 0;
}