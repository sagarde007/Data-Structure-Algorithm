#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    void sumBST(TreeNode* root, int l, int h, int &sum){
        if(root==NULL)
        return;
        sumBST(root->left,l,h,sum);
        sumBST(root->right,l,h,sum);
        if(root->val>=l && root->val<=h)
        sum+=root->val;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum =0;
        sumBST(root,low,high,sum);
        return sum;

    }
};

int main(){

    // leedcode problem --->938
    
    // https://leetcode.com/problems/range-sum-of-bst/

    return 0;
}