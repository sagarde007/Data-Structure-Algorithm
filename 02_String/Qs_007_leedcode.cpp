#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'|| c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string reverseVowels(string s) {
        int start =0 , end = s.size()-1;
        while(start<end){
            while(start < end && !isVowel(s[start])){
                start++;
            }
            while(start<end && !isVowel(s[end])){
                end--;
            }
            swap(s[start] , s[end]);
            start++ , end--;
        }
        return s;
        

       
        
    }
};
    
int main(){
    // leedcode problem ---> 345
    // https://leetcode.com/problems/reverse-vowels-of-a-string/?envType=problem-list-v2&envId=string
    return 0;
}