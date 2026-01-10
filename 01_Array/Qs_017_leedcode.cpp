#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int count1 = 0 , count2 = 0;
        int element1 = INT_MIN , element2 = INT_MIN;

        for(int i=0;i<n;i++){
            if(count1==0 && element2 != nums[i]){
                count1 = 1;
                element1 = nums[i];
            }
            else if(count2 ==0 && element1 != nums[i]){
                count2 = 1;
                element2 = nums[i];
            }
            else if(nums[i] == element1){
                count1++;
            }    
            else if(nums[i] == element2){
                count2++;
            }
            else{
                count1-- ;
                count2-- ;
            }

        }

        count1 =0 , count2 =0;
        for(int i =0 ;i<n;i++){
            if(nums[i] == element1){
                count1++;
            }
            if(nums[i] == element2){
                count2++;
            }
        }

        int mini = (n/3)+1;
        vector<int>ans;

        if(count1 >= mini){
            ans.push_back(element1);
        }
        if(count2 >= mini && element1 != element2){
            ans.push_back(element2);
        }

        return ans;
    }
    
};
int main(){
    // leedcode problem ---> 229
    // https://leetcode.com/problems/majority-element-ii/description/
    return 0;
}