
https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-platforms


class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dept[], int n)
    {
        /*
        int ans=1;
        for(int i=0;i<n;i++){
            int temp=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(arr[i]>=arr[j] && dept[j]>=arr[i])
                    temp++;
                }
            }
            ans=max(temp,ans);
        }
        return ans;
        */
    
    	
    	sort(arr,arr+n);
    	sort(dept,dept+n);
    	
    	int i=1,j=0;
    	int plat_needed=1;
    	int res=1;
    	
    	while(i<n && j<n){
    	    if(arr[i]<=dept[j]){
    	        plat_needed++;
    	        i++;
    	    }
    	    else if(arr[i]>dept[j]){
    	        plat_needed--;
    	        j++;
    	    }
    	    
    	    if(plat_needed>res)
    	    res=plat_needed;
    	}
    	
    	return res;
    	
    }
};
