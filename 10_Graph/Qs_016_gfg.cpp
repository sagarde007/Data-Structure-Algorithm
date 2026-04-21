#include <bits/stdc++.h>
#include<iostream>
using namespace std;


bool valid(int i , int j , int n , int m){
    return (i>=0 && j>=0 && i<n && j<m);
}

{
    if(!A[0][0])
    return -1;

    if(x==0 && y==0)
    return 0;
    queue<pair<int , pair<int , int>>>q;
    q.push({0 , {0,0}});
    vector<vector<bool>>visited(n,vector<bool>(M,0));
    visited[0][0] = 1;
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second.first;
        int step = q.front().second.second;
        q.pop();

        for(int k=0 ; k<4;k++){
            int new_i = i+row[k];
            int new_j = J + col[k];

            if(valid(new_i , new_j , N,M) && A[new_i][new_j] && visited[new_i][new_j]){
                if(new_i == x && new_j == y)
                return step + 1;

                visited[new_i][new_j] = 1;
                q.push({new_i , {new_j , step+1}});
            }
        }
    }
    return -1;
}
    
int main(){
    gfg problem ---> shortest source to destination path
    return 0;
}