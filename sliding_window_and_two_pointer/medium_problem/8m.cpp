

https://practice.geeksforgeeks.org/problems/maximum-point-you-can-obtain-from-cards/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-point-you-can-obtain-from-cards


class Solution {
  public:
  
    long long maxScore(vector<int>&a, int n, int k) {
       
       long long sum=0;
       long long total_sum=0;
       long long rem=n-k;
       long long min_sum=0;
       
       for(int i=0;i<rem;i++){
           sum+=a[i];
           total_sum+=a[i];
       }
       
       min_sum=sum;
       for(int i=rem;i<n;i++){
           sum-=a[i-rem];
           sum+=a[i];
           total_sum+=a[i];
           
           min_sum=min(min_sum,sum);
       }
       
       return total_sum-min_sum;
       
       
    }
};
