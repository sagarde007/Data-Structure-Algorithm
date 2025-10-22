#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    

class Solution {
public:
    TreeNode * BST(vector<int>preorder,int &index,int lower , int upper){
        if(index == preorder.size()||preorder[index]<lower || preorder[index]>upper){
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[index++]);
        root->left = BST(preorder,index,lower,root->val);
        root->right = BST(preorder,index,root->val,upper);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       int index =0;
       return BST(preorder,index,INT_MIN,INT_MAX); 
    }
};

int main(){
    
    // leedCode problem ---> 1008
    
    // https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/?envType=problem-list-v2&envId=tree
    return 0;
}