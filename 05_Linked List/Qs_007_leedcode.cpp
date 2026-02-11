#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// better aproach :-
class Solution {
public:
    ListNode *collisionPoint(ListNode *t1 , ListNode *t2 , int d){
        while(d){
            d--;
            t2 = t2->next;
        }
        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        int n1 =0;
        ListNode *temp2 = headB;
        int n2 =0;
        while(temp1 != NULL){
            n1++;
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            n2++;
            temp2 = temp2->next;
        }

        if(n1 < n2){
            return collisionPoint(headA , headB , n2-n1);
        }
        else{
            return collisionPoint(headB , headA , n1-n2);
        }
    }
};

// optimal approach :-
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {     
        if(headA == NULL || headB == NULL){
            return NULL;
        }

        ListNode *temp1 = headA;
        ListNode *temp2 = headB;

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;

            if(temp1 == temp2){
                return temp1;
            }
            if(temp1 == NULL){
                temp1 = headB;
            }
            if(temp2 == NULL){
                temp2 = headA;
            }
        }

        return temp1;

    }
};

int main(){
    // leedcode problem ---> 160
    // https://leetcode.com/problems/intersection-of-two-linked-lists/description/
    return 0;
}