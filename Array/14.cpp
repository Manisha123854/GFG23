

https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k


// refer to soln

class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        
        
        //BF
        
        /*int maxLen=0;
        for(int i=0;i<n;i++){                           ----------------> Tc=O(n*n*n) , sc=O(1)
            
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++)
                sum+=a[k];
                
                if(sum==k)
                maxLen=max(maxLen,j-i+1);
            }
        }
        return maxLen;
        */
        
        
        //Better
        
        /*int maxLen=0;                                         ----------------> Tc=O(n*n) , sc=O(1)
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                if(sum==k)
                maxLen=max(maxLen,j-i+1);
            }
        }
        
        return maxLen;*/
        
        
        //Best
        map<int,int>mp;                                  //---------------> Tc= O(nlogn) , sc=O(n)
        int sum=0;
        int maxLen=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum==k)
            maxLen=max(maxLen,i+1);
            
           if(mp.find(sum-k)!=mp.end())
           {
               maxLen=max(maxLen,i-mp[sum-k]);
           }
           
           if(mp.find(sum)==mp.end())
           mp[sum]=i;
        }
        
        
        return maxLen;
    } 

};