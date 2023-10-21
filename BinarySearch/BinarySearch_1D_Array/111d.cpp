
https://practice.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

class Solution{
public:	
	int findKRotation(int a[], int n) {
	    // code here
	  /*int ans=INT_MAX;
        int index=-1;
        for(int i=0;i<n;i++){
            if(a[i]<ans){
                index=i;
                ans=a[i];
            }
        }
        return index;*/




int low=0;;
int high=n-1;
int ans=INT_MAX;
int index=-1;
while(low<=high){
    int mid=(low+high)/2;
    if(a[low]<=a[mid]){
        if(a[low]<ans){
            index=low;
            ans=a[low];
        }
       
        low=mid+1;
    }
    else{
        if(a[mid]<ans){
            index=mid;
            ans=a[mid];
        }
        
        high=mid-1;
    }

}

return index;

	}

};