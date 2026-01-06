#include <bits/stdc++.h>
#include<iostream>
using namespace std;
   
// 1 :- brute force solution

// int findDuplicate(vector<int>& nums) {
        
//         sort(nums.begin() , nums.end());

//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==nums[i+1])
//             return nums[i];
//         }
//         return -1;

//     }

// 2 :- better solution

// int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>duplicate(n+1 , 0);

//         for(int i =0;i<n;i++){
//             if(duplicate[nums[i]]==0){
//                 duplicate[nums[i]] +=1;
//             }
//             else{
//                 return nums[i];
//             }
//         }
//         return 0;

// 3 :- 3rd aproach (most optimal solution )

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
       int slow = nums[0];
       int fast = nums[0];

       do{
            slow = nums[slow];
            fast = nums[nums[fast]];
       }while(slow!=fast);

       fast = nums[0];

       while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
       }

       return slow;
        



    }
};
int main(){
    // leedcode problem ---> 287
    // https://leetcode.com/problems/find-the-duplicate-number/description/
    return 0;
}