
https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reversal-algorithm

//solved by my own

class Solution{   
public:
        void reverse(int a[],int i,int j){
	        while(i<j){
	        swap(a[i],a[j]);
	        i++;
	        j--;
	     }
	    
	    }
    void leftRotate(int a[], int n, int d) {
        // code here
        
        
        //BF

       /* 

         if(n==0)
	    return;

	    d=d%n;
        if(d>n)
        return;                            ----------------> Tc= O(n) ,Sc=O(d)
        
       int t[d];
	   for(int i=0;i<d;i++){
	       t[i]=a[i];
	   }
	   
	   for(int i=d;i<n;i++){
	       a[i-d]=a[i];
	   }
	   
	   
	   for(int i=0;i<d;i++){
	       a[n-d+i]=t[i];
	   }
	   
	   */
	   
       //Best

         if(n==0)                //---------------> Tc= O(n) ,Sc=O(1)
	    return;
	    d=d%n;
        if(d>n)
        return;
	   reverse(a,0,d-1);
	   reverse(a,d,n-1);
	   reverse(a,0,n-1);
	   
	   
	   
	   
    }
};