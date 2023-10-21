


https://practice.geeksforgeeks.org/problems/maximum-sum-combination/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-sum-combination

class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        
       /* 
        vector<int>v;
          vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)               ///----------------->Tc=O(n*n),sc=O(n*n)
            {
                int sum=a[i]+b[j];
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        //reverse(v.begin(),v.end());
        for(int i=0;i<k;i++)
        ans.push_back(v[i]);
        return ans;
        */
                                           
         vector<int>v;
        sort(a.begin(),a.end());                          //----------->Tc=O(nlogn)+O(klogn),sc=O(n)
        sort(b.begin(),b.end());
        priority_queue<pair<int,pair<int,int>>>pq;
        set<pair<int,int>>st;
        
        pq.push({a.back()+b.back(),{n-1,n-1}});
        st.insert({n-1,n-1});
        
        while(k--){
            auto p=pq.top();
            int sum=p.first;
            int i=p.second.first;
            int j=p.second.second;
            v.push_back(sum);
            pq.pop();                             
            
            if(st.find({i-1,j})==st.end()){
            pq.push({a[i-1]+b[j],{i-1,j}});
            st.insert({i-1,j});
            }
             if(st.find({i,j-1})==st.end()){
            pq.push({a[i]+b[j-1],{i,j-1}});
            st.insert({i,j-1});
            }
            
            
        }
        
        
        return v;
        
        }
};