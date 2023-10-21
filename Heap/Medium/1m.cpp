


 https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-largest-elements

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int a[], int n, int k)
    {
        /*
        vector<int>v;
        
        sort(a,a+n);
        
        for(int i=n-k;i<n;i++)
        v.push_back(a[i]);
        
        reverse(v.begin(),v.end());
        
        return v;
        */
        
        vector<int>v;
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<n;i++){
            pq.push(a[i]);
            if(pq.size()>k)
            pq.pop();
        }
        
        while(pq.size()>0){
            v.push_back(pq.top());
            pq.pop();
        }
        
        reverse(v.begin(),v.end());
        return v;
     
    }
};

