

https://practice.geeksforgeeks.org/problems/maximum-consecutive-ones/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-consecutive-ones


class Solution {
  public:
    int longestOnes(int n, vector<int>&a, int k) {
    
    /*
    int ans=INT_MIN;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int t=k,fc=0;
            for(int k=i;k<=j;k++){
                if(a[k]==1 || t>0)
                fc++;
                else
                fc=0;
                
                ans=max(ans,fc);
                
                if(a[k]==0)
                t--;
            }
        }
    }
    
    return ans;
   
   */
   
   
   
     
      int fc=0;
      int start=0;
      int end=0;
      int ans=0;
      
      while(end<n)
      {
          if(a[end]==1)
          end++;
          else{
              if(fc<k){
                  fc++;
                  end++;
              }
              else{
              while(fc>=k){
                  
                  if(a[start]==0)
                  fc--;
                  
                  start++;
              }
              }
              
          }
          
          
          
          ans=max(ans,end-start);
      }
      
      
      return ans;
      
     
      
    }
};