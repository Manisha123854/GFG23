
https://practice.geeksforgeeks.org/problems/subset-sums2234/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subset-sums


class Solution
{
   void  findSubsetSum(int ind,vector<int>&a,int n,int sum,vector<int>&v){
       
       if(ind==n){
           v.push_back(sum);
           return;
       }
       findSubsetSum(ind+1,a,n,sum+a[ind],v);
       findSubsetSum(ind+1,a,n,sum,v);
   }
    
public:
    vector<int> subsetSums(vector<int>a, int n)
    {
        vector<int>v;
        
        findSubsetSum(0,a,n,0,v);
        return v;
    }
};