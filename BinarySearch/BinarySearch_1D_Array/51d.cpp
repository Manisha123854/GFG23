
https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%3BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long>a, long long n, long long x){
        
        /*for(int i=n-1;i>=0;i--){
            if(a[i]<=x)
            return  i;
        }
       
        return -1;
        */
        
        long long low=0;
        long long high=n-1;
        long long ans=-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]<=x){
                ans=mid;
                low=mid+1;
            }
            else
            high =mid-1;
        }
        return ans;
        
        
    }

    int findCeil(vector<long long>a, long long n, long long x){
        
        /*for(int i=0;i<n;i++){
            if(a[i]>=x)
            return  i;
        }
       
        return -1;
        */
        
        long long low=0;
        long long high=n-1;
        long long ans=-1;
        
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
};