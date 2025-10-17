#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
class Solution {
public:
    int height(TreeNode* root,bool &valid){
        if(root==NULL)
        return 0;

        int L = height(root->left,valid);
        int R = height(root->right,valid);

        if(abs(L-R)>1)
        valid =0;

        return 1 + max(L,R);
    }
    bool isBalanced(TreeNode* root) {
        bool valid =1;
        height(root,valid);
        return valid;
    }
};
int main(){
    leedcode problem --->110
    // https://leetcode.com/problems/balanced-binary-tree/?envType=problem-list-v2&envId=tree
    return 0;
}