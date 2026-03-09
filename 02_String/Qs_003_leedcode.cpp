#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";

        sort(strs.begin() , strs.end());
        int n = strs.size();

        string first = strs[0];
        string last = strs[n-1];

        string ans = "";

        int minilength = min(first.size() , last.size());

        for(int i =0 ; i<minilength ; i++){
            if(first[i] != last[i])
            break;

            ans+= first[i];
        }
        return ans;
    }

};

int main(){
    // leedcode problem ---> 14
    // https://leetcode.com/problems/longest-common-prefix/description/?envType=problem-list-v2&envId=string
    return 0;
}