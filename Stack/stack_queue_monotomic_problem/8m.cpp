
https://practice.geeksforgeeks.org/problems/sum-of-subarray-ranges/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sum-of-subarray-ranges

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
    
    vector<int>getNGL(vector<int> &a,int n){
         vector<int>v;
         stack<int>st;
         
        for(int i=0;i<n;i++){
            while(!st.empty() && a[st.top()]<=a[i])
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
    
     vector<int>getNGR(vector<int> &a,int n){
         vector<int>v;
         stack<int>st;
         
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && a[st.top()]<a[i])
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
    long long subarrayRanges(int n, vector<int> &a) {
        
       /* int total_sum=0;
        
        for(int i=0;i<n;i++){
            int min_ele=a[i],max_ele=a[i];
            
            for(int j=i;j<n;j++){
                min_ele=min(min_ele,a[j]);
                max_ele=max(max_ele,a[j]);
                
                total_sum+=(max_ele-min_ele);
            }
        }
        
        return  total_sum;
        */
        
        
         vector<int>NSL= getNSL(a,n);
        vector<int>NSR=getNSR(a,n);
        
         vector<int>NGL= getNGL(a,n);
        vector<int>NGR=getNGR(a,n);
        
        
        long long min_sum=0;
        int m=1e9+7;
        
        for(int i=0;i<n;i++){
            long long ls= i-NSL[i];
            long long rs= NSR[i]-i;
            
            long long totalways= ls*rs;
            
            long long total_sum = totalways*a[i];
            min_sum= (min_sum+total_sum)%m;
        }
        long long max_sum=0;
        
        for(int i=0;i<n;i++){
            long long ls= i-NGL[i];
            long long rs= NGR[i]-i;
            
            long long totalways= ls*rs;
            
            long long total_sum = totalways*a[i];
            max_sum= (max_sum+total_sum)%m;
        }
        
        
        return max_sum-min_sum;
        
        
    }
};