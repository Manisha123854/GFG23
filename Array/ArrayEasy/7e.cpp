

https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array

 // refer sol for best approah

class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	   
	  
	   
	  // Bf
	  /*
	   int i=0;                              --------------> Tc= O(n),Sc=O(1)
	   for(int j=0;j<n;j++){
	       if(a[j]!=0){
	           a[i++]=a[j];
	       }
	   }
	    for(int j=i;j<n;j++)
	    a[j]=0;
	    */
	    
	    
        // Best
	    int c=0;
	    for(int i=0;i<n;i++ ){            //------------> Tc=O(n) ,Sc=O(1)
	       
	       if(a[i]!=0) {
	           swap(a[i],a[c]);
	           c++;
	       }
	    }
	    
	    
	}
};