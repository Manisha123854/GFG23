

https://practice.geeksforgeeks.org/problems/jump-game/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=jump-game

class Solution {
    
    bool solve(int i,int a[],int n){
        if(i==n-1)
        return true;
        
        int coverage= i+a[i];
        
        for(int k=i+1;k<=coverage;k++){
            if(solve(k,a,n))
            return true;
            
        }
        
        return false;
    }
    
  public:
    int canReach(int a[], int n) {
        
       // Tc=O(pow(n,n)),sc=o(n)
       // return solve(0,a,n);
        
        
        
     //Tc=O(n),sc=O(1)
     
      int finalPos=n-1;
      for(int i=n-2;i>=0;i--){
          
          if(i+a[i]>=finalPos)
          finalPos=i;
      }
      return finalPos==0;
      
      
    }
};