



https://practice.geeksforgeeks.org/problems/binary-subarray-with-sum/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-subarray-with-sum

class Solution{
    
    int atmosttargetsubarray(vector<int>& a,int n,int target){
        
        int start=0;
        int end=0;
        int sum=0;
        int cnt=0;
        while(end<n){
            sum+=a[end++];
            
            while(start<end && sum>target){
            sum-=a[start++];
            }
            cnt+=end-start;
            
        }
        return cnt;
        
    }
    
    
  public:
    int numberOfSubarrays(vector<int>& a, int n, int target){
        
        /*
        int sum=0;
        int c=0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==target)
            c++;
         if(mp.find(sum-target)!=mp.end())  
         c+=mp[sum-target];
         
         if(mp.find(sum)!=mp.end())
         mp[sum]++;
         else
         mp[sum]=1;
        
        }
        
        return c;
        */
        
        
        
        return atmosttargetsubarray(a,n,target)-atmosttargetsubarray(a,n,target-1);
        
    }
};