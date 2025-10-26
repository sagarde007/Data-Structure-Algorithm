#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    void Left(TreeNode* root1 , vector<int>&arr1){
        if(root1==NULL)
        return ;
        if(!root1->left && !root1->right)
        arr1.push_back(root1->val);

        Left(root1->left , arr1);
        Left(root1->right , arr1);
    }
    void Right(TreeNode* root2 , vector<int>&arr2){
        if(root2==NULL)
        return ;
        if(!root2->left && !root2->right)
        arr2.push_back(root2->val);

        Right(root2->left , arr2);
        Right(root2->right , arr2);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>arr1;
        vector<int>arr2;

        Left(root1,arr1);
        Right(root2,arr2);

        if(arr1.size() != arr2.size())
        return 0;

        for(int i=0 ;i<arr1.size();i++){
            if(arr1[i]!=arr2[i])
            return 0;
        }
        return 1;
    }
};

int main(){
    // leedcode problem ---> 872
    // https://leetcode.com/problems/leaf-similar-trees/description/?envType=problem-list-v2&envId=tree
    return 0;
}