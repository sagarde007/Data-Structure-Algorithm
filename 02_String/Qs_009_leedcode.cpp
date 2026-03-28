#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    string reorderSpaces(string text) {
        vector<string>words;
        string word ;
        int space = 0;
        for(auto c : text){
            if(c == ' '){
                space++;
                if(!word.empty()){
                words.push_back(word);
                }
                word = "";
            }
            else{
                word += c;
            }
        }
        if(!word.empty())
        words.push_back(word);

        if(space == 0) return text;

        int num = words.size();
        if(num ==1) return words[0] + string(space , ' ');

        int totalSpace = space/(num-1);
        int rem = space % (num-1);

        string ans = "";
        for(int i=0;i<num-1;i++){
            ans+=words[i];
            ans+= string(totalSpace , ' ');
        }

        ans += words[num-1];
        ans += string(rem, ' ');
        return ans;
    }
};


int main(){
    // leedcode problem ---> 1592
    // https://leetcode.com/problems/rearrange-spaces-between-words/description/?envType=problem-list-v2&envId=string
    return 0;
}