https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	
	
int firstIndex(int a[], int n,int x){
   
   int low=0,high=n-1;
   int first=-1;
while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==x){
        first=mid;
        high=mid-1;
    }
    else if(a[mid]<x)
    low=mid+1;
    else
    high=mid-1;
}
return first;
}

int lastIndex(int a[],int n, int x){
 
   int low=0,high=n-1;
   int last=-1;
while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==x){
        last=mid;
        low=mid+1;
    }
    else if(a[mid]<x)
    low=mid+1;
    else
    high=mid-1;
}
return last;
}
	int count(int a[], int n, int x) {
	    // code here
	    
	  int first=firstIndex(a,n,x);
	  if(first==-1)
	  return 0;
	  int last=lastIndex(a,n,x);
	  
	  return last-first+1;
	  
	    
	}
};