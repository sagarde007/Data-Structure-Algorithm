#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        sort(intervals.begin() , intervals.end());

        vector<vector<int>>ans;

        int n = intervals.size();

        // -----> 1st method (brute force method)

            for(int i =0 ; i<n;){

                int start = intervals[i][0];
                int end = intervals[i][1];

                int j = i+1;
                while(j<n && intervals[j][0] <= end){
                    end = max(end , intervals[j][1]);
                    j++;
                }

                ans.push_back({start , end});

                i = j;
            }

        // ----> 2nd method (optimal approach)

            // for(int i =0 ; i< n ; i++){
            //     if(ans.empty() || intervals[i][0] > ans.back()[1]){
            //         ans.push_back(intervals[i]);
            //     }

            //     else{
            //         ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
            //     }


            // }

        
    
        return ans ;

    }
};
    
int main(){
    // leedcode problem ---> 56
    // https://leetcode.com/problems/merge-intervals/description/

    return 0;
}