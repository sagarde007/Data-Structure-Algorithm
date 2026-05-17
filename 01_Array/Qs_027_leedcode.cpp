#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// brute force approach :-
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count =0;
        for(int i=0 ; i<grid.size();i++){
            for(int j=0 ; j<grid[i].size();j++){
                if(grid[i][j] <0)
                count++;
            }
        }
        return count;
    }
};

// binary search approach :-
class Solution {
public:
    int BinarySearch(vector<int>&nums){
        int n = nums.size();

        int start =0 , end = n-1;
        int firstneg = n;
        while(end >= start){
            int mid = (start + end) / 2;
            if(nums[mid] <0){
                firstneg = mid;
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return n - firstneg;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();

        int ans = 0;
        for(int i=0 ; i<n; i++){
           ans += BinarySearch(grid[i]);
        }
        return ans;
        
    }
};

    
int main(){
    // leedcode problem ---> 1351
    // https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/?envType=problem-list-v2&envId=binary-search
    return 0;
}