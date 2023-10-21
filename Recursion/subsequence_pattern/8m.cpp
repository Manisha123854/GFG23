

https://leetcode.com/problems/combination-sum-ii/description/

class Solution {
    void findcombinationSum2(int ind,vector<int>&a,int target,vector<int>&v,vector<vector<int>>&ans) {
        if(target==0){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<a.size();i++){

            if(i>ind && a[i]==a[i-1])
            continue;
            if(a[i]>target)
            break;
            v.push_back(a[i]);
            findcombinationSum2(i+1,a,target-a[i],v,ans);
            v.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>&a, int target) {

        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        vector<int>v;
       findcombinationSum2(0,a,target,v,ans);
       return ans;
        
    }
};