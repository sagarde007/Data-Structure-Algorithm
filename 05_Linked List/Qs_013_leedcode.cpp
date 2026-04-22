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
    ListNode* rightHalf(ListNode* head){
        ListNode* slow = head , *fast = head;
        ListNode* prev = NULL;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev){
            prev->next = NULL;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void merge(ListNode* Lhead , ListNode* Rhead){
        ListNode* left = Lhead;
        ListNode* right = Rhead;
        ListNode* tail;

        while(left && right){
            ListNode* NXT_left = left->next;
            ListNode* NXT_right = right->next;
            left->next = right;
            right->next = NXT_left;
            tail = right;
            left = NXT_left;
            right = NXT_right;
        }
        if(right){
            tail->next = right;
        }

    }

    void reorderList(ListNode* head) {
        ListNode* right = rightHalf(head);

        right = reverse(right);

        merge(head , right);
    }
};
    
int main(){
    // leedcode problem --- > 143

    // https://leetcode.com/problems/reorder-list/?envType=problem-list-v2&envId=two-pointers
    
    return 0;
}