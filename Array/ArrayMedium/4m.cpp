

https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0?company[]=Visa&company[]=Visa&page=2&query=company[]Visapage2company[]Visa&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=kadanes-algorithm

class Solution{
    public:
        long long maxSubarraySum(int a[], int n){
        
        /*
        long long maxsum=INT_MIN;
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                long long sum=0;
                for(int k=i;k<=j;k++)
                sum+=a[k];
                
                 maxsum= max(maxsum,sum);
            }
        }
        
        return maxsum;
        */
        
        
        /*long long maxsum=INT_MIN;
        
        for(int i=0;i<n;i++){
             long long sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                maxsum= max(maxsum,sum);
            }
        }
        
        return maxsum;
        */
        
        long long maxsum=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>maxsum)
            maxsum=sum;
            if(sum<0)
            sum=0;
        }
        
        return maxsum;
        
    }
};