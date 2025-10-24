#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
        return NULL;

        if(root->val > p->val && root->val > q->val)
        return lowestCommonAncestor(root->left,p,q);

        else if(root->val < p->val && root->val < q->val)
        return lowestCommonAncestor(root->right,p,q);

        else{
            return root;
        }
    }
};

int main(){
    // leedcode problem ---> 235
    // https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
    return 0;
}