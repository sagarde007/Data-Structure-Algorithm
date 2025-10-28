#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    void inorder(TreeNode* root , vector<int>&ans){
        if(root==NULL)
        return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>ans;
        inorder(root , ans);
        TreeNode* newroot = new TreeNode(ans[0]);
        TreeNode* curr = newroot;
        for(int i=1;i<ans.size();i++){
            curr->right = new TreeNode(ans[i]);
            curr = curr->right;
        }

        return newroot;
    }
};

int main(){
    // leedcode problem ---897
    // https://leetcode.com/problems/increasing-order-search-tree/?envType=problem-list-v2&envId=tree
    return 0;
}