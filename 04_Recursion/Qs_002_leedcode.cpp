#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n ==7)
        return true;

        else if(n<10)
        return false;

        else{
            int sum = 0;
            while(n>0){
                int rem = n %10;
                sum += (rem*rem);
                n = n/10;
            }
            return isHappy(sum);
        }

    }
};

int main(){
    // leedcode problem ---> 202
    https://leetcode.com/problems/happy-number/?envType=problem-list-v2&envId=math
    return 0;
}