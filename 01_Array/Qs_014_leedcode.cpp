#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:

        // 1 :- brute force aproach

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false ;
    }


        //  2:- better aproach
    
    bool BinarySearch(vector<int>&nums , int target){
        int n = nums.size();
        int start = 0 ;
        int end = n-1;

        while(start<=end){
            int mid = (end+start)/2;

            if(nums[mid]==target)
            return true;

            else if(target > nums[mid]){
                start = mid +1 ;
            }
            else{
                end = mid -1 ;
            }

        }
        return false ;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0;i<row;i++){
            if(matrix[i][0]<=target && matrix[i][col-1]>=target){
                return BinarySearch(matrix[i],target);
            }
        }

        return false;

        
    }

        // 3 :- Best aproach (most optimal solution)

    bool searchMatrix(vector<vector<int>>& matrix, int x) {
            int n=matrix.size(), m=matrix[0].size();
    int start =0,end =(n*m)-1,row_index,col_index,mid;
    while(start<=end){
        mid =start + (end-start)/2;
        row_index = mid/m;
        col_index = mid%m;
        if(matrix[row_index][col_index]==x){
            return 1;
        }
        else if(matrix[row_index][col_index]<x){
            start=mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return 0;
    }
};

int main(){
    // leedcode problem ---> 74
    // https://leetcode.com/problems/search-a-2d-matrix/
    return 0;
}