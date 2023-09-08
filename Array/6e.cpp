
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
        
        
       /* 
        d=d%n;
        if(d==0)
	    return;
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
	   
	    d=d%n;
	   if(d==0)
	    return;
	   reverse(a,0,d-1);
	   reverse(a,d,n-1);
	   reverse(a,0,n-1);
	   
	   
	   
	   
    }
};