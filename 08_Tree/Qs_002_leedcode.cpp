#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* temp =q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }       
            }
            ans.push_back(v);
        }
        return ans;
    }
};
    
int main(){
    // leedcode problem--->102
    // https://leetcode.com/problems/binary-tree-level-order-traversal/?envType=problem-list-v2&envId=tree
    return 0;
}