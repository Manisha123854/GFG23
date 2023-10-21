

https://practice.geeksforgeeks.org/problems/candy/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=candy



class Solution {
  public:
    int minCandy(int n, vector<int> &a) {
     /*
     vector<int>L2R(n,1);
     vector<int>R2L(n,1);
     
     
     for(int i=1;i<n;i++){
         if(a[i]>a[i-1]){
             L2R[i]=max(L2R[i],L2R[i-1]+1);
         }
     }
     
     
      
     for(int i=n-2;i>=0;i--){
         if(a[i]>a[i+1]){
             R2L[i]=max(R2L[i],R2L[i+1]+1);
         }
     }
     
     int res=0;
     for(int i=0;i<n;i++)
     res+=max(L2R[i],R2L[i]);
     
     
     return res;
     */
     
    
    /* vector<int>count(n,1);
    
     
     
     for(int i=1;i<n;i++){
         if(a[i]>a[i-1]){
             count[i]=max(count[i],count[i-1]+1);
         }
     }
     
     
      
     for(int i=n-2;i>=0;i--){
         if(a[i]>a[i+1]){
             count[i]=max(count[i],count[i+1]+1);
         }
     }
     
     int res=0;
     for(int i=0;i<n;i++)
     res+=count[i];
     
     
     return res;
     
     */
     
     
     int candy=n;
     int i=1;
     
     while(i<n){
         if(a[i]==a[i-1]){
             i++;
             continue;
         }
         
         //increasing slope
         int peak=0;
         while(a[i]>a[i-1]){
             
             peak++;
             candy+=peak;
             i++;
             
             if(i==n)
             return candy;
         }
         
         
         //decreasing slope
         int dip=0;
         
         while(i<n && a[i]<a[i-1]){
             dip++;
             candy+=dip;
             i++;
            }
         candy-=min(peak,dip);
     }
     return candy;
     
    }
};






