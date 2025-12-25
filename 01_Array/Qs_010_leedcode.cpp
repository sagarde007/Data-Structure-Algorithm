#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0 ;i<n-1 ;i++){
            for(int j = i+1 ; j<n ; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        for(int i=0 ; i< n ; i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }

    }
};
    
int main(){
    // leedcode problem ---> 46
    // https://leetcode.com/problems/rotate-image/description/
    return 0;
}