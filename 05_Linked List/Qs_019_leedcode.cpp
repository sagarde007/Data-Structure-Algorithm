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
    ListNode* partition(ListNode* head, int x) {
        ListNode *LeftList = new ListNode(0);
        ListNode *RightList = new ListNode(0);

        ListNode *left = LeftList;
        ListNode *right = RightList;

        while(head != NULL){
            if(head->val < x){
                left->next = head;
                left = left->next;
            }
            else{
                right->next = head;
                right = right->next;
            }
            head = head->next;
        }

        left->next = RightList->next;
        right->next = NULL;

        return LeftList->next;

    }
};
    
int main(){
    // leedcode problem ---> 86
    // https://leetcode.com/problems/partition-list/description/?envType=problem-list-v2&envId=two-pointers
    return 0;
}