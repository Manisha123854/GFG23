


https://practice.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1



class Solution {
  public:
    int totalFruits(int n, vector<int> &a) {
        
       /* int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                unordered_set<int>st;
                
                for(int k=i;k<=j;k++){
                st.insert(a[k]);
                if(st.size()>2)
                break;
            }
            
            if(st.size()<=2)
            ans=max(ans,j-i+1);
        }
        }
        
        return ans;
        */
        
        
       
        int start=0;
        int end=0;
        int ans=0;
        unordered_map<int,int>mp;
        
        while(end<n){
            mp[a[end++]]++;
            
            while(mp.size()>2){
                mp[a[start++]]--;
                
                if(mp[a[start-1]]==0)
                mp.erase(a[start-1]);
            }
            
            ans=max(ans,end-start);
            
        }
        
        return ans;
    
    }
};