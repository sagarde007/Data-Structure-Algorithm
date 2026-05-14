#include <bits/stdc++.h>
#include<iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root , vector<int>&nums){
        if(!root)
        return ;
        inorder(root->left , nums);
        nums.push_back(root->val);
        inorder(root->right , nums);
    }
    bool FindTargetSum(vector<int>nums , int target){
        int left = 0 , right = nums.size()-1;
        int sum =0;
        while(left < right){
            sum = nums[left] + nums[right];
            if(sum == target){
                return true;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
            sum =0;
        } 
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>nums;
        inorder(root , nums);
        return FindTargetSum(nums , k);
    }
};

    
int main(){
    // leedcode problem --->653
    // https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/?envType=problem-list-v2&envId=two-pointers
    return 0;
}