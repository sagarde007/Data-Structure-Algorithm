#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    string reversestr(string word , int start , int end){
        string temp;
        while(start < end){
            swap(word[start] , word[end]);
            start++ ;
            end--;

        }
        return word;
    }
    string finalString(string s) {
        string word;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'i'){
                word = reversestr(word , 0 , word.size()-1);
            }
            else{
                word+= s[i];
            }

        }
        return word;
    }
};
    
int main(){
    // leedcode problem ---- > 2810
    // https://leetcode.com/problems/faulty-keyboard/description/
    return 0;
}