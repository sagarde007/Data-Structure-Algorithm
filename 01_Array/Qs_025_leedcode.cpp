#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int , int>mpp;
        for(auto x : nums){
            mpp[x]++;
        }

        vector<int>ans;
        for(auto x : mpp){
            if(x.second == 2){
                ans.push_back(x.first);
            }
        }

        int xorr = 0;
        for(int i =0;i<ans.size();i++){
            xorr = xorr ^ ans[i];
        }

        return xorr;
    }
};

int main(){
    // leedcode problem ---> 3158
    // https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/description/
    return 0;
}