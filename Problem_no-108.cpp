#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    TreeNode* Build(vector<int>&nums,int start,int end){
        if(start==end){
            return NULL;
        }
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left  = Build(nums,start,mid);
        root->right = Build(nums,mid+1,end);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start =0 , end = nums.size();
        return Build(nums,start,end);
    }
};
int main(){
    // leedcode Problrm ---> 108
    // https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/?envType=problem-list-v2&envId=tree
    return 0;
}