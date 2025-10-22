#include <bits/stdc++.h>
#include<iostream>
using namespace std;
  
class Solution {
public:
    
    int find(vector<int> &in, int target, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (in[i] == target)
                return i;
        }
        return -1;
    }
        TreeNode* Tree(vector<int> &in, vector<int> &pre, int Instart, int Inend, int &index) {
        if (Instart > Inend)
            return NULL;
        
        TreeNode *root = new TreeNode(pre[index]);
        int pos = find(in, pre[index], Instart, Inend);
        index++;
        root->left = Tree(in, pre, Instart, pos - 1, index);
        root->right = Tree(in, pre, pos + 1, Inend, index);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int index = 0;
        return Tree(inorder, preorder, 0, inorder.size() - 1, index);
    }
};

int main(){
    
    // leedcode problem--->105

    // https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/?envType=problem-list-v2&envId=tree
    return 0;
}