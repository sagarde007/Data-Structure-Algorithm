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

    bool IsvalidBST(TreeNode *root , long long minval , long long maxval){
        if(root == NULL)
        return true;

        if(root->val <= minval || root->val >= maxval){
            return false;
        }
        return IsvalidBST(root->left , minval , root->val) && IsvalidBST(root->right , root->val , maxval);
    }
    bool isValidBST(TreeNode* root) {
        return IsvalidBST(root , LLONG_MIN , LLONG_MAX);
    }
};
int main(){
    // leedcode problem ---> 98
    // https://leetcode.com/problems/validate-binary-search-tree/
    return 0;
}