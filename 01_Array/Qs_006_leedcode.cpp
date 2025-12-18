#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int>generaterow(int row){
        long long ans =1;
        vector<int>ansrow;
        ansrow.push_back(1);
        for(int col=1;col<row-1;col++){
            ans = ans * (row - col);
            ans = ans/(col);
            ansrow.push_back(ans);
        }
        if(row>1)
        ansrow.push_back(1);
        
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generaterow(i));
        }

        return ans;
    }
};

int main(){
    // leedcode problem ---> 118
    // https://leetcode.com/problems/pascals-triangle/description/
    return 0;
}