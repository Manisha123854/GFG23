


https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-number-of-jumps

class Solution{
  public:                                             //Tc=O(n),sc=O(1)
    int minJumps(int a[], int n){
       
       int totaljumps=0;
       int destination=n-1;
       int lastjumpidx=0;
       int coverage=0;
       
       
       
       if(n==1)
       return 0;
       
       for(int i=0;i<n;i++){
           coverage=max(coverage,i+a[i]);
           
           if(i==lastjumpidx)
           {
              lastjumpidx=coverage;
               totaljumps++;
               
               if(coverage>=destination){
                   return totaljumps;
               }
           }
           
       }
       
       
       return -1;
       
       
    }
};
