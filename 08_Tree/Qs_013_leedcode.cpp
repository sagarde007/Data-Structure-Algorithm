#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

       while(root){
            if(root->val == val){
                return root;
            }
            if(root->val>val){
                return searchBST(root->left,val);

            }
            return searchBST(root->right,val);

       }
       return NULL;
    }
};

int main(){

    // leedcode problem ---> 700
    
    // https://leetcode.com/problems/search-in-a-binary-search-tree/description/?envType=problem-list-v2&envId=tree
    
    return 0;
}