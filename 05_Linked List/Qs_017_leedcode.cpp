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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *left = head;
        ListNode *right = head;
        ListNode *prev = new ListNode(-1);

        if(head->next == NULL)
        return NULL;

        while(right != NULL && right->next != NULL){
            prev = left;
            left = left->next;
            right = right->next->next;
        }
        ListNode *curr = left->next;
        prev->next = curr;

        return head;

    }
};

    
int main(){
    // leedcode problem ---> 2095
    // https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/?envType=problem-list-v2&envId=two-pointers
    return 0;
}