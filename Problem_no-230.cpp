#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    void inorder(TreeNode* root, vector<int>&ans){
        if(!root)
        return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inorder(root,ans);
        return ans[k-1];
    }
};

int main(){
    // leedcode problem --->230
    // https://leetcode.com/problems/kth-smallest-element-in-a-bst/?envType=problem-list-v2&envId=tree
    return 0;
}