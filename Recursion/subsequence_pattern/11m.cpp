
https://leetcode.com/problems/combination-sum-iii/description/

class Solution {

void findCombinationsum(int ind,int a[],int n,int k,int target, vector<int>&v,vector<vector<int>>&ans){

    if(ind==n){
        if(target==0)
        {
            if(v.size()==k)
             ans.push_back(v);
        }
        return;
    }

if(a[ind]<=target){
    v.push_back(a[ind]);
    findCombinationsum(ind+1,a,n,k,target-a[ind],v,ans);
    v.pop_back();
}
  findCombinationsum(ind+1,a,n,k,target,v,ans);
}
public:
    vector<vector<int>> combinationSum3(int k, int target) {
        int n=9;
        int a[]={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        vector<int>v;
        findCombinationsum(0,a,n,k,target,v,ans);
       return ans;
        
    }
};