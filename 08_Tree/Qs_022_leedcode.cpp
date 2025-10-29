#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class Solution {
public:
    bool universal(TreeNode* root , int val){
        if(root==NULL)
            return 1;

        if(root->val != val)
        return 0;

        return universal(root->left,val) && universal(root->right,val);
    }

    bool isUnivalTree(TreeNode* root) {
        return universal(root,root->val);
    }

};

int main(){
    // leedcode problem --->965
    // https://leetcode.com/problems/univalued-binary-tree/?envType=problem-list-v2&envId=tree
    return 0;
}