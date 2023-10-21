

https://practice.geeksforgeeks.org/problems/kth-largest-element-in-a-stream2220/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=kth-largest-element-in-a-stream

class Solution {
  public:
    vector<int> kthLargest(int k, int a[], int n) {
        // code here                                            //---------->Tc=O(nlogk),sc=O(k)
        
         vector<int>v;
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
            
            if(pq.size()>k){
                pq.pop();
            }
            
            if(pq.size()<k)
            v.push_back(-1);
            else
            v.push_back(pq.top());
        }
        
        return v;
        
    }
};