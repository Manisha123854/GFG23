
https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-cost-of-ropes

class Solution
{
    public:                                                            //--------->Tc--O(nlogn),sc=0(n)
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long a[], long long n) {
        // Your code here
        
        
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<n;i++)
        pq.push(a[i]);
        
        long long cost=0;
        while(pq.size()>=2){
            
            long long first=pq.top();
            pq.pop();
            long long second=pq.top();
            pq.pop();
            
            cost+=first+second;
            pq.push(first+second);
            
            
        }
        return cost;
    }
};
