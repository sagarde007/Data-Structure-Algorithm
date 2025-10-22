#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root== p || root==q)
        return root;

        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        if(left==NULL)
        return right;

        else if(right == NULL)
        return left;

        else return root;

        
    }
};


int main(){

    //  leedCode problem ---> 236

    // https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/?envType=problem-list-v2&envId=tree

    return 0;
}