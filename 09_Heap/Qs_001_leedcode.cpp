#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>>>p;
        //pair<int,pair<int,int>>
        int Min , Max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            p.push(make_pair(nums[i][0],make_pair(i,0)));
            Max = max(Max,nums[i][0]);
        }
        Min = p.top().first;
        vector<int>ans(2);
        ans[0] = Min;
        ans[1] = Max;
        pair<int,pair<int,int>>temp;
        int row , col , element;
        while(p.size()==nums.size()){
            temp = p.top();
            p.pop();

            element = temp.first;
            row = temp.second.first;
            col = temp.second.second;
            if(col+1 < nums[row].size()){
                col++;
                p.push(make_pair(nums[row][col] , make_pair(row,col)));
                Max = max(Max,nums[row][col]);
                Min = p.top().first;

                if(Max - Min <ans[1]-ans[0]){
                    ans[0] = Min;
                    ans[1] = Max;
                }
            }
        }
        return ans;
    }
};

int main(){
    // leedcode problem ---> 632
    // https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/
    return 0;
}