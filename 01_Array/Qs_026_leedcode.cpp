#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// best aproach using set
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin() , nums1.end());
        unordered_set<int>result;

        for(int num : nums2){
            if(s1.find(num) != s1.end()){
                result.insert(num);
            }
        }
        return vector<int>(result.begin() , result.end());

    }
};

// using sorting and two pointer approach

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin() , nums1.end());
        unordered_set<int>result;

        for(int num : nums2){
            if(s1.find(num) != s1.end()){
                result.insert(num);
            }
        }
        return vector<int>(result.begin() , result.end());

    }
};
    
int main(){
    // leedcode problem ---> 349
    // https://leetcode.com/problems/intersection-of-two-arrays/submissions/1979368121/?envType=problem-list-v2&envId=two-pointers
    return 0;
}