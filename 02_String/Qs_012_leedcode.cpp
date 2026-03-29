#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    string sortSentence(string s) {
        string word = "";
        vector<string>words;

        for(int i=0 ; i<s.size();i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else{
                words.push_back(word);
                word = "";
            }
        }
        words.push_back(word);

        vector<string>ans(words.size());

        for(int i=0 ;i<words.size();i++){
            string temp = words[i];

            int position = temp.back() - '0';
            temp.pop_back();

            ans[position - 1] = temp;
        }

        string result = "";

        for(int i =0;i<ans.size();i++){
            result += ans[i];
            if(i != ans.size() -1)
            result += " ";
        }

        return result;
        
    }
};

int main(){
    // leedcode problem ---> 1859
    // https://leetcode.com/problems/sorting-the-sentence/description/?envType=problem-list-v2&envId=string
    return 0;
}