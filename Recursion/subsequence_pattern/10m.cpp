https://practice.geeksforgeeks.org/problems/subset-sum-ii/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subset-sum-ii

class Solution {
void  findUniqueSubset(int ind,vector<int>&a,vector<int>&v,vector<vector<int>>&ans)
{
    
    
    ans.push_back(v);
    
    for(int i=ind;i<a.size();i++){
        
        if(i!=ind && a[i]==a[i-1])
        continue;
        
        v.push_back(a[i]);
        findUniqueSubset(i+1,a,v,ans);
        v.pop_back();
    }
    
}
  public:
    vector<vector<int>>printUniqueSubsets(vector<int>&a) {
       
       vector<vector<int>>ans;
       vector<int>v;
       sort(a.begin(),a.end());
       
       findUniqueSubset(0,a,v,ans);
       return ans;
    }
};
