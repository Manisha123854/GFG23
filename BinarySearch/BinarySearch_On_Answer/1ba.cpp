


https://practice.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
class Solution{
  public:
           
    long long int floorSqrt(long long int n) 
    {
        /* long long int ans=1;  
        for(int i=1;i<=n;i++){
            if(i*i<=n)
                ans=i;
            else
                break;
        }
        
        
        return ans; 
        */
        
       long long int ans=1;
       long long int low=1,high=n;
        while(low<=high){
            
          long long  int mid=(low+high)/2;
            
            if(mid*mid<=n){
                ans=mid;
                low=mid+1;
            }
            else
            high=mid-1;
        }
        
        return ans;
    }
    
};