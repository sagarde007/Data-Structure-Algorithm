#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string Totalword1 = "";
        string Totalword2 = "";
        for(int i=0 ; i<word1.size();i++){
            Totalword1 += word1[i];
        }
        for(int i=0 ; i<word2.size();i++){
            Totalword2 += word2[i];
        }

        if(Totalword1 == Totalword2){
            return true;
        }
        return false;
    }
};

    
int main(){
    // leedcode problem ---> 1662
    // https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/?envType=problem-list-v2&envId=string
    return 0;
}