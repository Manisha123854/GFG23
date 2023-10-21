
https://leetcode.com/problems/subsets/description/

class Solution {

    void findsubset(int ind,vector<int>&a,vector<int>&v vector<vector<int>>&ans){

        int n=a.size();
        if(ind==n){
            ans.push_back(v);
            return;
        }
        v.push_back(a[ind]);
        findsubset(ind+1,a,v,ans);
        v.pop_back();
        findsubset(ind+1,a,v,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>&a) {
         vector<vector<int>>ans;
         vector<int>v;

         findsubset(0,a,v,ans);
         return ans;
    }
};