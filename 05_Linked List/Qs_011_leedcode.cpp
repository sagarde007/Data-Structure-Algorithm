#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


//  brute force approach :-

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>Mpp;
        ListNode *temp = head;
        while(temp != NULL){
            if(Mpp.find(temp) != Mpp.end())
            return temp;

            Mpp.insert(temp);
            temp = temp->next;
        }
        return NULL;
    }
};

// optimized approach :-
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        // 01 :- find there is a loop or not
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
        
    }
};

int main(){
    // leedcode problem ---> 142
    // https://leetcode.com/problems/linked-list-cycle-ii/description/
    return 0;
}