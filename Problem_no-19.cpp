#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *temp = head;
        // count total number of node
        while(temp){
            count++;
            temp = temp->next;
        };
        count-=n;
        if(count==0){
            temp = head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(count--){
            prev = curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        delete curr;

        return head;
    }
};

int main(){
    leedcode problem--19
    // https://leetcode.com/problems/remove-nth-node-from-end-of-list/
    return 0;
}