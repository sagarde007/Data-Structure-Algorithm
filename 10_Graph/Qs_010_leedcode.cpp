#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        // create an adjacency list 
        vector<int>adj[n];

        for(int i=0;i<relations.size();i++){
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
        }

        vector<int>indeg(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                indeg[adj[i][j]]++;
            }
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(!indeg[i])
            q.push(i);
        }

        vector<int>CourseTime(n,0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int j=0;j<adj[node].size();j++){
                indeg[adj[node][j]]--;
                if(!indeg[adj[node][j]])
                q.push(adj[node][j]);

                CourseTime[adj[node][j]] = max(CourseTime[adj[node][j]] , CourseTime[node] + time[node]);

            }
        }

        int ans =0;
        for(int i=0;i<n;i++){
            ans = max(ans,CourseTime[i] + time[i]);
        }
        return ans;


    }
};


    
int main(){
    // leedcode problem ---> 2050
    // https://leetcode.com/problems/parallel-courses-iii/submissions/1971368444/
    return 0;
}