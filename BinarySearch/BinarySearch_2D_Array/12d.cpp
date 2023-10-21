

https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s

class Solution{
public:
    
    int lowerBound(vector<int>&a,int n,int x){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        
        return ans;
    }
    
	int rowWithMax1s(vector<vector<int> > mat, int n, int m) {
	    
	    
	    /*int max_cnt=0;
	    int index=-1;
	    for(int i=0;i<n;i++){
	        
	        int row_cnt=0;
	        for(int j=0;j<m;j++)
	       {
	           row_cnt+=mat[i][j];
	       }  
	       
	       if(row_cnt>max_cnt){
	       max_cnt=row_cnt;
	       index=i;
	       }
	    }
	    
	    return index;
	    
	    */
	    
	    int max_cnt=0;
	    int index=-1;
	    for(int i=0;i<n;i++){
	        int cnt_ones=m-lowerBound(mat[i],m,1);
	        if(cnt_ones>max_cnt){
	            max_cnt=cnt_ones;
	            index=i;
	        }
	        
	    }
	    
	    return index;
	}

};