#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
class Solution {
public:
    TreeNode* Tree(vector<int>&in , vector<int>&post,int instart,int inend,int index){
        if(instart>inend)
        return NULL;

        TreeNode* root = new TreeNode(post[index]);
        int pos = find(in,post[index],instart,inend);

        root->right = Tree(in,post,pos+1,inend, index-1);
        root->left = Tree(in,post,instart,pos-1,index-(inend-pos)-1);

        return root;

    }
    int find(vector<int>&in , int terget, int start,int end){
        for(int i=start;i<=end;i++){
            if(in[i]==terget)
            return i;
        }
        return -1;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index = postorder.size() - 1;
        return Tree(inorder,postorder,0,inorder.size()-1,index);
    }
};


int main(){
    leedcode problem ---> 106
    // https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/?envType=problem-list-v2&envId=tree
    return 0;
}