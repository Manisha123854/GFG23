


https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=trapping-rain-water



class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
      
      /*
      long long sum=0;
      
      for(int i=1;i<n-1;i++){
          
          int left=a[i];
          
          for(int j=0;j<i;j++)
          left=max(left,a[j]);
          
          int right=a[i];
           for(int j=i+1;j<n;j++)
          right=max(right,a[j]);
          
          sum+=(min(left,right)-a[i]);
          
      }
       return sum;
       
       */
       
       
        int maxl[n];
        int maxr[n];
        
        maxl[0]=a[0];
        
        for(int i=1;i<n;i++)
        maxl[i]=max(maxl[i-1],a[i]);
        
        
        maxr[n-1]=a[n-1];
        
        for(int i=n-2;i>=0;i--)
        maxr[i]=max(maxr[i+1],a[i]);
        
        int water[n];
        for(int i=0;i<n;i++)
        water[i]=min(maxl[i],maxr[i])-a[i];
        
        long long sum=0;
         for(int i=0;i<n;i++)
         sum+=water[i];
         
         
         return sum;
         
        
        
    }
};