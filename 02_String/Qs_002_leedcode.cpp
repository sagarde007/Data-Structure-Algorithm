#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char, int>mpp;

        for(char c: s){
            mpp[c]++;
        }

        for(int i =0 ; i<n;i++){
            if(mpp[s[i]] == 1)
            return i;
        }

        return -1;
    }
};

int main(){
    // leedcode problem ---> 387
    // https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=problem-list-v2&envId=string
    return 0;
}