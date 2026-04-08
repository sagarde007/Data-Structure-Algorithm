#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    string reverseByType(string s) {

        int left = 0, right = s.size() - 1;

        while(left < right){

            if(isalpha(s[left]) && isalpha(s[right])){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if(!isalpha(s[left])){
                left++;
            }
            else{
                right--;
            }
        }

        left =0 , right = s.size()-1;
        while(left < right){

            if(!isalpha(s[left]) && !isalpha(s[right])){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if(isalpha(s[left])){
                left++;
            }
            else{
                right--;
            }
        }

        return s;
    }
};


int main(){
    // leedcode problem --->3823
    // https://leetcode.com/problems/reverse-letters-then-special-characters-in-a-string/description/?envType=problem-list-v2&envId=string

    return 0;
}