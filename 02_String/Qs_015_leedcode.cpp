#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string word = "";

        // Step 1: split words
        for(int i = 0; i <= s.size(); i++){
            if(i == s.size() || s[i] == ' '){
                ans.push_back(word);
                word = "";
            }
            else{
                word += s[i];
            }
        }

        // Step 2: reverse each word in place
        int k = 0;

        for(int i = 0; i < ans.size(); i++){
            string temp = ans[i];

            for(int j = temp.size() - 1; j >= 0; j--){
                s[k++] = temp[j];
            }

            if(i != ans.size() - 1){
                s[k++] = ' ';
            }
        }

        return s;
    }
};


// alternative approach:-
class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        reverse(s.begin() + i, s.end());
        return s;
    }
};
int main(){
    // leedcode problem --->557
    // https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/1982449389/?envType=problem-list-v2&envId=two-pointers
    return 0;
}