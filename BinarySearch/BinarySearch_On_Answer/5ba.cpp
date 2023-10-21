

https://practice.geeksforgeeks.org/problems/smallest-divisor/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=smallest-divisor


class Solution {
    
    int sumByD(vector<int>&a,int mid){
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=ceil((double)a[i]/(double)mid);
        }
        
        return sum;
        
    }
  public:
    int smallestDivisor(vector<int>&a, int k) {

        // Write your code here.
        /*int n=a.size();
        int maxN=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(a[i]>maxN)
            maxN=a[i];
        }
        
        for(int d=1;d<=maxN;d++){
            int sum=0;
            for(int i=0;i<n;i++)
            sum+=ceil((double)a[i]/(double)d);
            
            if(sum<=k)
            return d;
        }
        
        return -1;
        */
        int n=a.size();
        int maxN=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(a[i]>maxN)
            maxN=a[i];
        }
        
        int low=1,high=maxN;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            
            if(sumByD(a,mid)<=k){
            ans=mid;
            high=mid-1;
            }
            else
            low=mid+1;
            
        }
        
        return ans;
        
    }
};