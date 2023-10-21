
https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-if-an-array-is-sorted

// solved by my own


class Solution {
  public:
    bool arraySortedOrNot(int a[], int n) {
      
         // BF
      
      /* for(int i=0;i<n;i++){                         //------------>  Tc= O(n*n),   sc=O(1) 
           for(int j=i+1;j<n;j++){
              if(a[j]<a[i]) 
              return 0;
           }
       }
           return 1;
       */
       
       
       
       //Best
       for(int i=0;i<n-1;i++){                        // --------------> Tc= O(n) ,  sc=O(1)
            if(a[i]>a[i+1]){
                return 0;
            }
        }
        
        return 1;
        
    }
};