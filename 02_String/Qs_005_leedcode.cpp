#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
        return false;

        unordered_map<char , char>m1 , m2;
        for(int i =0 ; i<s.size();i++){
            if(m1.count(s[i]) && m1[s[i]] != t[i])
            return false;

            if(m2.count(t[i]) && m2[t[i]] != s[i])
            return false;

            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        return true ;
    }
};


int main(){
    // leedcode problem ---> 205
    // https://leetcode.com/problems/isomorphic-strings/description/?envType=problem-list-v2&envId=string
    return 0;
}