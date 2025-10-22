#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }

        int ans=0,rem,num=x;
        while(num!=0){
            rem=num%10;
            num/=10;
            if(ans>INT_MAX/10){
                return 0;
            }
            ans=ans*10+rem;
        }

        if(x==ans){
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main(){
    // leedcode problem ---> 9
    // https://leetcode.com/problems/palindrome-number/
    return 0;
}