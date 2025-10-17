#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        if(root==NULL)
        return ans;
        while(!q.empty()){
            int n = q.size();
            ans.push_back(q.front()->val);
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->right)
                q.push(temp->right);

                if(temp->left)
                q.push(temp->left);
            }
        }
        return ans;
    }
};


int main(){
    //leedcode problem --->199
    // https://leetcode.com/problems/binary-tree-right-side-view/?envType=problem-list-v2&envId=tree
    root = [1,2,3,NULL,5,NULL,4];
    rightSideView(root);
    return 0;
}