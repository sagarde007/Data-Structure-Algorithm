#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
  public:
    int r;
    int c;
    int row[4] = {1,-1,0,0};
    int col[4] = {0,0,1,-1};
    bool valid(int i , int j){
        return i>=0 && i<r && j>=0 && j<c;
    }
    void fill(vector<vector<char>>& grid) {
        // Code here
        r = grid.size();
        c = grid[0].size();
        queue<pair<int , int>>q;
        
        // first row
        for(int j=0 ; j<c;j++){
            if(grid[0][j] == 'O'){
                q.push(make_pair(0,j));
                grid[0][j] = 'T';
            }
        }
        // forst col
        for(int i=1 ; i<r;i++){
            if(grid[i][0] == 'O'){
                q.push(make_pair(i,0));
                grid[i][0] = 'T';
            }
        }
        // last row
        for(int j=1 ; j<c;j++){
            if(grid[r-1][j] == 'O'){
                q.push(make_pair(r-1,j));
                grid[r-1][j] = 'T';
            }
        }
        // last col
        for(int i=1 ; i<r-1;i++){
            if(grid[i][c-1] == 'O'){
                q.push(make_pair(i,c-1));
                grid[i][c-1] = 'T';
            }
        }
        
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++){
                if(valid(i+row[k] , j+col[k]) && grid[i+row[k]][j+col[k]] == 'O'){
                    grid[i+row[k]][j+col[k]] = 'T';
                    q.push(make_pair(i+row[k] , j+col[k]));
                }
            }
        }
        
        // replace all O with X and all T with O
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == 'O')
                grid[i][j] = 'X';
                
                else if(grid[i][j] == 'T'){
                    grid[i][j] = 'O';
                }
            }
        }
    }
};

int main(){
    // gfg problem --- > Replace O's with X's
    // https://www.geeksforgeeks.org/problems/replace-os-with-xs0052/1?page=2&difficulty%5B%5D=1&category%5B%5D=Graph&sortBy=submissions
    return 0;
}