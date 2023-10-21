
https://leetcode.com/problems/combination-sum/description/

class Solution {

void findCombinationsum(int ind,vector<int>&a,int target, vector<int>&v,vector<vector<int>>&ans){

    if(ind==a.size()){
        if(target==0)
        ans.push_back(v);
        return;
    }

if(a[ind]<=target){
    v.push_back(a[ind]);
    findCombinationsum(ind,a,target-a[ind],v,ans);
    v.pop_back();
}
  findCombinationsum(ind+1,a,target,v,ans);
}


public:
    vector<vector<int>> combinationSum(vector<int>&a, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        findCombinationsum(0,a,target,v,ans);
        return ans;
    
    }
};