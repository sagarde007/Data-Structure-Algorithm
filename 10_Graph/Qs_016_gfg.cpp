#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class Solution {
  public:
    bool valid(int i , int j , int n , int m){
        return (i>=0 && j>=0 && i<n && j<m);
    }

    int row[4] = {1 , -1 , 0 , 0};
    int col[4] = {0 , 0 , 1 , -1};

    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {

        if(!A[0][0]) return -1;
        if(X == 0 && Y == 0) return 0;

        // store: {i, j, steps}
        queue<pair<int,int>> q;
        q.push({0,0});
        
        int step =0;
        
        A[0][0] =0;

        while(!q.empty()){
            int count = q.size();
            
            while(count--){

                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                for(int k = 0; k < 4; k++){
                    int ni = i + row[k];
                    int nj = j + col[k];

                    if(valid(ni, nj, N, M) && A[ni][nj]){

                        if(ni == X && nj == Y)
                            return step + 1;
                            
                        A[ni][nj] = 0;
                        q.push({ni ,nj});
                        
                    }
                }
            
            }
            step++;
        }

        return -1;
    }
};
    
int main(){
    gfg problem ---> shortest source to destination path
    return 0;
}