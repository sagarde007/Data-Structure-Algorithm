#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string temp = "";

        for(int i =0 ; i<s.size();i++){
            if(s[i] == ' '){
                words.push_back(temp);
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        words.push_back(temp);

        int n = words.size();

        if(pattern.size() != n){
            return false;
        }

        unordered_map<char, string>m1;
        unordered_map<string , char>m2;

        for(int i =0;i<pattern.size();i++){
            char ch = pattern[i];
            string word = words[i];

            if(m1.count(ch)){
                if(m1[ch] != word){
                    return false;
                }
            }
            else{
                m1[ch] = word;
            }

            if(m2.count(word)){
                if(m2[word] != ch){
                    return false;
                }
            }
            else{
                m2[word] = ch;
            }

        }
        return true;

    }
};

int main(){
    // leedcode problem ---> 290
    // https://leetcode.com/problems/word-pattern/description/?envType=problem-list-v2&envId=string
    return 0;
}