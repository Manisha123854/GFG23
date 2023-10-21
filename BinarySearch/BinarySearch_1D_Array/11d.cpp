
https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-search

//own

class Solution {
  public:
    int binarysearch(int a[], int n, int k) {
        // code here
        
     
     int low=0;
     int high=n-1;
     
     while(low<=high){
         int mid= (low+(high-low)/2);
         
         
         if(a[mid]==k)
         return mid;
         else if(a[mid]<k)
         low=mid+1;
         else
         high=mid-1;
         
     }
     
     return -1;
        
    }
};