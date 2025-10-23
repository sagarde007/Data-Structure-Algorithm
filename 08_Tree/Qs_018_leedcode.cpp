#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:

    bool checkTree(TreeNode* root) {
        int sum;
        sum = root->left->val + root->right->val;

        if(sum == root->val)
        return 1;

        return 0;
    }
};

int main(){
    // leedcode problem --->2236
    // https://leetcode.com/problems/root-equals-sum-of-children/description/?envType=problem-list-v2&envId=tree
    return 0;
}