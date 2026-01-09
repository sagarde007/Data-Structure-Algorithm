#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
// 1 :- better approach 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int>Map;

        for(int num : nums){
            Map[num]++;
        }

        for(auto& pair : Map){
            if(pair.second > n/2){
                return pair.first;
            }
        }
        return -1;
    }
};

// 2 :- best aproach (most optimal solution)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int candidate,count =0, n=nums.size();

    for(int i=0;i<n;i++){
        if(count==0){
            count++;
            candidate=nums[i];
        }
        else{
            if(candidate==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    return candidate;
    }
};
int main(){
    // leedcode problem ---> 169
    // https://leetcode.com/problems/majority-element/description/
    return 0;
}