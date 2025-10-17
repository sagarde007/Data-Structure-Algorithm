#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        return NULL;

        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
        invertTree(root->left);
        invertTree(root->right);

        return root;
        
    }
};

int main(){
    // leedcode problem --->226
    // https://leetcode.com/problems/invert-binary-tree/?envType=problem-list-v2&envId=tree
    
    return 0;
}