
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sort-an-array-of-0s-1s-and-2s


class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        //BF
        
       //sort(a,a+n);                    ------>    Tc=O(NlogN),sc=0(1)
       
       
       
      /* int i=0;
       int t[n];
       for(int  j=0;j<n;j++){              ------------------>Tc=O(n), sc=O(n)
           if(a[j]==0)
           t[i++]=a[j];
       }
       for(int  j=0;j<n;j++){
           if(a[j]==1) 
           t[i++]=a[j];
       }
       for(int  j=0;j<n;j++){
           if(a[j]==2)
           t[i++]=a[j];
       }
       
       for(int i=0;i<n;i++){
           a[i]=t[i];
       }
       
       */
       
       
       /*int c0=0,c1=0,c2=0;
       
       for(int i=0;i<n;i++){
           if(a[i]==0)
           c0++;
           else if(a[i]==1)         -------------->Tc=O(n) ,sc=O(1)
           c1++;
           else
           c2++;
       }
       
       
       for(int i=0;i<c0;i++){
          a[i] =0;
       }
       
       for(int i=c0;i<c0+c1;i++){
          a[i] =1;
       }
       for(int i=c0+c1;i<n;i++){
          a[i] =2;
       }
       
       */
       
       //Best
       
       int low=0;                                     //-------------------> Tc=O(n) ,sc=O(1)
       int high =n-1;
       int mid=0;
       while(mid<=high){
           if(a[mid]==0){
           swap(a[low],a[mid]);
           low++;
           mid++;
           }
           else if(a[mid]==1){
               mid++;
           }
           else
           {
               swap(a[mid],a[high]);
               high--;
           }
       }
       
       
    }
    
};
