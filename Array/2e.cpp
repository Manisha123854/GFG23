

https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

//solved by my own


class Solution{
public:	
	
	int print2largest(int a[], int n) {
	    // code here
	    
	    
        //Bf
       /* 

        if(n<2)                        ----------------> Tc=O(nlog), sc=O(n)
	    return -1;
        sort(a,a+n);                 
        return a[n-2];

	    */
	    
	   /* betted-----
	    
	    if(n<2)
	    return -1;
	    int max1=INT_MIN;   -------------------------------> Tc= O(n) and 2 travesal, sc=O(n)
	    int max2=-1;
	    for(int i=0;i<n;i++){
	        if(a[i]>max1)
	        max1=a[i];
	       
	   }
	    
	    for(int i=0;i<n;i++){
	        if(a[i]<max1&& a[i]>max2)
	        max2=a[i];
	    }
	    
	    
	    return max2;
	    */
	    
	    // best 
	    
	    
	   if(n<2)
	    return -1;
	    int max1=-1;                               //----------------Tc= O(n) and 1 traversal, sc=O(1)
	    int max2=-1;
	    
	    for(int i=0;i<n;i++){
	        
	        if(a[i]>max1){
	        max2=max1;
	        max1=a[i];
	        }
	    
	     if(a[i]<max1 && a[i]>max2)
	     max2=a[i];
	     
	    }
	    
	    
	    return max2;
	    
	}
};