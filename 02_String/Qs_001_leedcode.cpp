#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string addBinary(string a, string b) {
    string ans;
    int i= a.size()-1;
    int j= b.size()-1;
    int sum , carry=0;
    while(i>=0 || j>=0){
        sum = carry;
        if(i>=0){
            sum+=a[i] - '0';
        } 
        if(j>=0){
            sum+=b[j] - '0';
        }
        ans+=to_string(sum%2);
        carry = sum/2;
        i--,j--;
    }
    if(carry!=0){
        ans+='1';
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
    
int main(){

    // leedcode problem --> 67
    
    // https://leetcode.com/problems/add-binary/?envType=problem-list-v2&envId=math
    return 0;
}