#include<bits/stdc++.h>
using namespace std;

// @ayushshah
class Solution {
public:

    void get_soln(vector<int>& candidates,int curr, int target,int curr_sum,vector<int> temp,set<vector<int>> &ans){
        // base cases
        if(curr_sum==target){
            ans.insert(temp);
            return;
        }
        if(curr_sum>target){
            return;
        }
        if(curr>=candidates.size()){
            return;
        }
        // recursive cases
        // include
        temp.push_back(candidates[curr]);
        get_soln(candidates,curr+1,target,curr_sum+candidates[curr],temp,ans);
        // exclude
        temp.pop_back();
        while(curr+1<candidates.size()&&candidates[curr]==candidates[curr+1]){
            curr=curr+1;
        }
        get_soln(candidates,curr+1,target,curr_sum,temp,ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        set<vector<int>> ans;
        vector<int> temp;
        get_soln(candidates,0,target,0,temp,ans);
        vector<vector<int>> v(ans.begin(),ans.end());
        return v;
    }

};
