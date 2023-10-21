

https://practice.geeksforgeeks.org/problems/sum-of-subarray-minimum/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sum-of-subarray-minimum


class Solution {
    
    
    vector<int>getNSL(vector<int> &a,int n){
         vector<int>v;
         stack<int>st;
         
        for(int i=0;i<n;i++){
            while(!st.empty() && a[st.top()]>=a[i])
            st.pop();
            
            if(st.empty())
            v.push_back(-1);
            else
            v.push_back(st.top());
            
            
            st.push(i);
            
        }
        
        return v;
    }
    
    vector<int>getNSR(vector<int> &a,int n){
         vector<int>v;
         stack<int>st;
         
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && a[st.top()]>a[i])
            st.pop();
            
            if(st.empty())
            v.push_back(n);
             else
            v.push_back(st.top());
            
            
            st.push(i);
            
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
  public:
    int sumSubarrayMins(int n, vector<int> &a) {
        
       /* int sum=0;
        for(int i=0;i<n;i++)
        {
            int min_ele=a[i];
            for(int j=i;j<n;j++){
                if(a[j]<min_ele)
                min_ele=a[j];
                
                sum+=min_ele;
            }
            
        }
        
        return sum;
        
        */
        
        
        vector<int>NSL= getNSL(a,n);
        vector<int>NSR=getNSR(a,n);
        
        long long sum=0;
        int m=1e9+7;
        
        for(int i=0;i<n;i++){
            long long ls= i-NSL[i];
            long long rs= NSR[i]-i;
            
            long long totalways= ls*rs;
            
            long long total_sum = totalways*a[i];
            sum= (sum+total_sum)%m;
        }
        
        return sum;
        
    }
};