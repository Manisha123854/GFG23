
https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win

// own
class Solution{
    public:
    int searchInSorted(int a[], int n, int k) 
    { 
    
    //BF                                     -------------->Tc=O(n) ,Sc=O(1)
        /*for(int i=0;i<n;i++){
           if(a[i]==k)
           return 1;
       }
       
       return -1;*/
       
       
       //Best
       int l=0;
       int h=n-1;               //--------------> Tc= O(logn) ,Sc=O(1)
       
       while(l<=h){
           
           int mid=l+((h-l)/2);
           
           if(a[mid]==k)
           return 1;
           else if(a[mid]<k)
           l=mid+1;
           else
           h=mid-1;
       }
       
       return -1;
       
    }
};