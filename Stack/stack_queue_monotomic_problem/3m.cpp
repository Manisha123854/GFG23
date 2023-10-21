

https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=immediate-smaller-element


class Solution{
public:	
	void immediateSmaller(vector<int>&a, int n) {
	    //  code here
	  
	  /*  
	    int k=0;
	    
	    for(int i=0;i<n-1;i++){
	      if(a[i+1]<a[i])
	      a[k++]=a[i+1];
	      else
	      a[k++]=-1;
	    }
	    a[k]=-1;
	    */
	    
	    
	    for(int i=0;i<n-1;i++){
	      if(a[i+1]<a[i])
	      a[i]=a[i+1];
	      else
	      a[i]=-1;
	    }
	    a[n-1]=-1;
	    
	   
	}

};