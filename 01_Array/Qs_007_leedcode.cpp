#include <bits/stdc++.h>
#include<iostream>
using namespace std;
   
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // set the index to -1
        int index = -1;

        // find first decreasing element from last
        for(int i = nums.size()-2;i>=0;i--)
        {
            if(nums[i] < nums[i+1])
            {
                index = i;
                break;
            }
        }

        // if no index found
        if(index == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        // find the element greater than nums[index] from end
        for(int i = nums.size() -1 ; i>index;i--){
            if(nums[i] > nums[index]){
                swap(nums[i] , nums[index]);
                break;
            }
        }

        // reverse the part after index 
        reverse(nums.begin() + index +1 , nums.end());


    }
};

int main(){
    // leedcode problem ---> 31
    // https://leetcode.com/problems/next-permutation/description/
    return 0;
}