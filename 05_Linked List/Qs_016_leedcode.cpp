#include <bits/stdc++.h>
#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *left = head;
        ListNode *right = head;
        for(int i=0 ; i<k-1;i++){
            right = right->next;
        }
        ListNode *end_ptr = right;
        while(right->next){
            left = left->next;
            right = right->next;
        }

        swap(end_ptr->val , left->val);
        return head;
    }
};
    
int main(){
    // leedcode problem ---> 1721
    // https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/?envType=problem-list-v2&envId=two-pointers
    return 0;
}