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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = NULL;

        while(head != NULL){
            ListNode *next = head->next;
            head->next = temp;
            temp = head;
            head = next;
        }

        return temp;
    }
};
    
int main(){
    // leedcode problem ---> 206
    // https://leetcode.com/problems/reverse-linked-list/description/
    return 0;
}