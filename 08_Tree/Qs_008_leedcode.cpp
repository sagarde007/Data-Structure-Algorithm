#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    void totalNodes(TreeNode* root, int &count){
        if(root==NULL){
            return;
        }
         count++;
        totalNodes(root->left,count);
        totalNodes(root->right,count);

    }
    int countNodes(TreeNode* root) {
        int count =0;
        totalNodes(root,count);
        return count;
    }
}
    
int main(){

    // leedCode problem ---> 222
    
    // https://leetcode.com/problems/count-complete-tree-nodes/
    return 0;
}