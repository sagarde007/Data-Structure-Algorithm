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
    ListNode* findKthNode(ListNode* temp , int k){
        k-=1;
        while(temp != NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
         ListNode *temp = head;
         ListNode *prevNode = NULL;
         while(temp != NULL){

            ListNode *Kth_Node = findKthNode(temp,k);
            if(Kth_Node == NULL){
                if(prevNode){
                    prevNode->next = temp;
                }
                break;
            }

            ListNode *nextNode = Kth_Node->next;
            Kth_Node->next = NULL;
            reverseList(temp);

            if(temp == head){
                head = Kth_Node;
            }
            else{
                prevNode->next = Kth_Node;
            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};

int main(){
    // leedcode problem ---> 25
    // https://leetcode.com/problems/reverse-nodes-in-k-group/
    return 0;
}