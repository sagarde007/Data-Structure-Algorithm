#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
class Solution {
public:
    bool symmetrick(TreeNode* l , TreeNode* r){
        if(l==NULL && r == NULL)
        return true;

        if(l==NULL || r == NULL)
        return false;

        return (l->val == r->val) && symmetrick(l->left , r->right) &&symmetrick(l->right , r->left);
    }
    bool isSymmetric(TreeNode* root) {
        return symmetrick(root->left , root->right);
    }
};

int main(){
    // leedcode problem ---> 101
    // https://leetcode.com/problems/symmetric-tree/description/?envType=problem-list-v2&envId=tree
    return 0;
}