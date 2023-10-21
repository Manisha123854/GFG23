
https://practice.geeksforgeeks.org/problems/count-subarray-with-k-odds/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-subarray-with-k-odds



class Solution {
    
    int  atmostkodd(vector<int>&a,int n,int k){
        
        
        int start=0;
        int end=0;
        int c=0;
        int ans=0;
        while(end<n){
            
            if(a[end++]%2!=0)
            c++;
            
            while(c>k){
                
               if(a[start++]%2!=0)
               c--;
               
            }
            
            ans+=end-start;
            
           
        }
        
        return ans;
        
        
    }
    
    
  public:
    int countSubarray(int n, vector<int>&a, int k) {
        
        //1st approach

       /* unordered_map<int,int>mp;
        int count=0;
        int oddcount=0;
        
        for(int i=0;i<n;i++){
           if(a[i]%2!=0) 
           oddcount++;
           if(oddcount==k)
           count++;
           
           if(mp.find(oddcount-k)!=mp.end())
           count+=mp[oddcount-k];
           
           if(mp.find(oddcount)!=mp.end())
           mp[oddcount]++;
           else
           mp[oddcount]=1;
        }
        
        return count;
        */

        // 2nd approach
        
        return atmostkodd(a,n,k)-atmostkodd(a,n,k-1);
        
        
    }
};