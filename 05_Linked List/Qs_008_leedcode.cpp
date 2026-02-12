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

//  brute force approach (using hashmap):-
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp = head;
        unordered_map<ListNode* , int>mpp;
        while(temp != NULL){
            if(mpp.find(temp) != mpp.end())
            return true;

            mpp[temp] = 1;
            temp = temp->next;
        }
        return false;
    }
};

// optimal approach :-

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

int main(){
    // leedcode problem ---> 141
    // https://leetcode.com/problems/linked-list-cycle/description/
    return 0;
}