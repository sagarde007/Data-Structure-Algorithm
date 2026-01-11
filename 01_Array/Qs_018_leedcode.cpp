#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n + m - 2;
        int r = m-1;
        double ans = 1;

        for(int i=1;i<=r;i++){
            ans = ans * (N-r+i)/i;
        }
        return (int)ans;
    }
};

int main(){
    // leedcode problem ---> 62
    // https://leetcode.com/problems/unique-paths/description/
    return 0;
}