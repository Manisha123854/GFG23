


https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=top-k-frequent-elements-in-array





class Solution {
    
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second)
        return a.first>b.first;
        
        return a.second>b.second;
    }
    
  public:
    vector<int> topK(vector<int>&a, int k){
        
        /*int n=a.size();
        unordered_map<int,int>mp;
       vector<pair<int,int>>v;
         vector<int>ans;
        
         for(int i=0;i<n;i++)
        mp[a[i]]++;
        
        for(auto it:mp){
            v.push_back({it.first,it.second});
        }
       sort(v.begin(),v.end(),cmp);
       
       for(int i=0;i<k;i++)
       ans.push_back(v[i].first);
       return ans;
       
       */
       
       
       unordered_map<int,int>mp;
         vector<int>v;
        
        priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        for(int i=0;i<n;i++)
        mp[a[i]]++;
        
        for(auto it:mp){
            pq.push({it.second,it.first});
            if(pq.size()>k)
            pq.pop();
        }
        
        while(pq.size()>0){
            v.push_back(pq.top().second);
            pq.pop();
            
        }
        
        reverse(v.begin(),v.end());
        
        return v;
        
        
}
};
