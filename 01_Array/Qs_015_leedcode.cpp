#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    double Power(double x , long long n){
        if(n==0)
        return 1;

        if(n==1)
        return x;

        if(n%2==0){
            return Power(x*x , n/2);
        }

        return x* Power(x,n-1);
    }
    double myPow(double x, int n) {
        long long num = n;
        
        if(num<0){
            return (1 / Power(x,-1*num));
        }
        return Power(x,num);
    }
};
    
int main(){
    // leedcode problem ---> 50
    // https://leetcode.com/problems/powx-n/description/
    return 0;
}