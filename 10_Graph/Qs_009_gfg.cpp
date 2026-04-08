#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
  public:
    int r, c;
    int row[4] = {1,-1,0,0};
    int col[4] = {0,0,1,-1};

    bool valid(int i , int j){
        return i>=0 && i<r && j>=0 && j<c;
    }

    int helpaterp(vector<vector<int>> hospital) {

        r = hospital.size();
        c = hospital[0].size();

        queue<pair<int,int>> q;

        // push all infected patients
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(hospital[i][j] == 2)
                    q.push({i,j});
            }
        }

        int timer = 0;

        while(!q.empty()){

            int curr_patient = q.size();
            bool spread = false;   // rack infection

            while(curr_patient--){

                auto [i,j] = q.front();
                q.pop();

                for(int k=0;k<4;k++){
                    int ni = i + row[k];
                    int nj = j + col[k];

                    if(valid(ni,nj) && hospital[ni][nj] == 1){
                        hospital[ni][nj] = 2;
                        q.push({ni,nj});
                        spread = true;   // infection happened
                    }
                }
            }

            if(spread) timer++;   // ncrement only when needed
        }

        // check if any uninfected left
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(hospital[i][j] == 1)
                    return -1;
            }
        }

        return timer;
    }
};

    
int main(){
    // gfg problem ---> Covid Spread
    // https://www.geeksforgeeks.org/problems/covid-spread--141631/1

    return 0;
}