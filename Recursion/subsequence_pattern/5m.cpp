
https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=perfect-sum-problem

class Solution{
    int  countSubsequence(int ind,int a[],int n,int s,int sum){
       

       //TLE
      int m=1e9+7;
       if(ind==n){
           
           if(s==sum)
           return 1;
           else
           return 0;
       }
       
       s+=a[ind];
       int l=countSubsequence(ind+1,a,n,s,sum);
       s-=a[ind];
       int r=countSubsequence(ind+1,a,n,s,sum);
       
       return (l+r)%m;
        
    }

	public:
	int perfectSum(int a[], int n, int sum)
	{
	    
      int s=0;
     return  countSubsequence(0,a,n,s,sum);
      
	}
	  
};
