

https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-of-all-subarrays-of-size-k


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
        /*
          vector <int>v;
        for(int i=0;i<n-k+1;i++){
            int max_ele=a[i];
            for(int j=i;j<i+k;j++){
                max_ele= max(max_ele,a[j]);
                }
                 v.push_back(max_ele);
            }
        
        return v;
        
        
        */
        
        vector<int>v;
        
        deque<int>dq;
        
        
        for(int i=0;i<n;i++){
            
            //to remove out of bound
            if(!dq.empty() && dq.front()==i-k)
            dq.pop_front();
            
            // to remove ele <=a[i]
            while(!dq.empty() && a[dq.back()]<=a[i])
            dq.pop_back();
            
            
            dq.push_back(i);
            
            if(i>=k-1)
            v.push_back(a[dq.front()]);
        }
        
        return v;
        
        
    }
};