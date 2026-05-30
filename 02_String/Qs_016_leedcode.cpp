#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int arr[26] = {0};

        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }

        for(int j=0;j<26;j++){
            if(arr[j] != 0)
            return false;
        }
        return true;
    }
};
    
int main(){
    // leedcpde problem --->242
    // https://leetcode.com/problems/valid-anagram/description/?envType=problem-list-v2&envId=sorting
    return 0;
}