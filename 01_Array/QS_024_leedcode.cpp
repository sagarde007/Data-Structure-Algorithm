#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left =0 , right = n-1 , leftmax = 0 , rightmax = 0 , totalwater = 0;
        while(left <= right){
            if(height[left] <= height[right]){
                if(height[left] >= leftmax){
                    leftmax = height[left];
                }
                else{
                    totalwater += leftmax - height[left];
                }
                left++;
            }
            else{
                if(height[right] >= rightmax){
                    rightmax = height[right];
                }
                else{
                    totalwater += rightmax - height[right];
                }
                right--;
            }
        }
        return totalwater;
    }
};

int main(){
    // leedcode problem ---> 42
    // https://leetcode.com/problems/trapping-rain-water/description/
    return 0;
}