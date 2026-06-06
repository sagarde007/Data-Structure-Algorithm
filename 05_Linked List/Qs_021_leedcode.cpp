#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Better approach :
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
    int getDecimalValue(ListNode* head) {

        int ans = 0;

        while(head){
            ans = ans * 2 + head->val;
            head = head->next;
        }

        return ans;
    }
};

// using vector :-

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
    int getDecimalValue(ListNode* head) {
        vector<int>arr;
        while(head){
            arr.push_back(head->val);
            head = head->next;
        }
        int ans =0;
        int n = arr.size();
        int l = n-1;
        for(int i = l;i>=0;i--){
            long long res = arr[i] * pow(2,(l-i));
            ans += res;
        }
        return ans;

    }
};

int main(){
    // leedcode problem --->1290
    // https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/?envType=problem-list-v2&envId=linked-list
    return 0;
}