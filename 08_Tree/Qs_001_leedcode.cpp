#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        return 1;
        if((!p&&q)|| (p&&!q))
        return 0;
        if(p->val != q->val)
        return 0;

        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
};   

int main(){
    // leedcode problem ---> 100
    // https://leetcode.com/problems/same-tree/description/?envType=problem-list-v2&envId=tree
    return 0;
}