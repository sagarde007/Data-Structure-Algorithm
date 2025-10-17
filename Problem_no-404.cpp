#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
class Solution {
public:
    void leftsum(TreeNode *root,int &sum){
        if(root==NULL)
        return;
        if(root->left && !root->left->left && !root->left->right){
            sum+=root->left->val;
        }
        leftsum(root->left,sum);
        leftsum(root->right,sum);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        leftsum(root,sum);
        return sum;
    }
};

int main(){
    // leedcode problem--->404
    // https://leetcode.com/problems/sum-of-left-leaves/?envType=problem-list-v2&envId=tree
    return 0;
}