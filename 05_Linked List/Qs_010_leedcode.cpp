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

//  brute force approach :-

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        stack<int>st;
        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL){
            if(temp->val != st.top()){
                return false;
            }
            temp = temp->next;
            st.pop();
        }
        return true;
    }
};

// optimal approach :-

class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode *prev = NULL;
        while(head){
            ListNode *next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // find the middle of Linked List
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next != NULL && fast->next->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // reverse the second half of LL 
        ListNode *newHead = reverseList(slow->next);

        // compair both first half and second half
        ListNode *first = head;
        ListNode *second = newHead;
        while(second != NULL){
            if(first->val != second->val){
                reverseList(slow->next);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};

int main(){
    // leedcode problem --->234
    // https://leetcode.com/problems/palindrome-linked-list/description/
    return 0;
}