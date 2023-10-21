
https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m


class Solution{
    
    int powfun(int mid,int n,int m){
        long long ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*mid;
            if(ans>m)
            return 2;
        }
        
        if(ans==m)
        return 1;
        return 0;
    }
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    /*int ans=-1;
	    for(int i=1;i<=m;i++){
	        
	        if(pow(i,n)==m)
	        ans=i;
	        else if(pow(i,n)>m)
	        break;
	        
	        
	    }
	    
	    return ans;
	    
	    */
	   /* 
	    int low=1, high=m;
	   
	    while(low<=high){
	        
	        int mid=(low+high)/2;
	        
	        if(pow(mid,n)==m){
	            return mid;
	            
	        }
	        else if(pow(mid,n)<m)
	           low=mid+1;
	           
	        else
	        high=mid-1;
	        
	         }
	    
	    return -1;
	    
	    */
	    
	    
	   int low=1,high=m;
	    
	    while(low<=high){
	        
	        int mid=(low+high)/2;
	        
	        int midN=powfun(mid,n,m);
	        
	        if(midN==1)
	        return mid;
	        else if(midN==0)
	        low=mid+1;
	        else
	        high=mid-1;
	        
	        
	    }
	    return -1;
	    
	    
	}  
};