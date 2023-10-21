

https://practice.geeksforgeeks.org/problems/subarrays-with-k-different-integers/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subarrays-with-k-different-integers


class Solution {
    
    int atmostkdifferentintergers(vector<int> &a, int n, int k){
        
        int start=0;
        int end=0;
        int count=0;
        unordered_map<int,int>mp;
        
        while(end<n){
            
            mp[a[end++]]++;
            
            while(mp.size()>k){
                mp[a[start++]]--;
                
                if(mp[a[start-1]]==0)
                mp.erase(a[start-1]);
            }
            count+=end-start;
        }
        
        return count;
    }
    
  public:
    int subarrayCount(vector<int> &a, int n, int k) {
     
     /*int count=0;
     for(int i=0;i<n;i++){
         for(int j=i;j<=n;j++){
             unordered_set<int>st(a.begin()+i,a.begin()+j);
             
             if(st.size()==k)
             count++;
         }
     }
     return count;
     */
   
     
        
     return  atmostkdifferentintergers(a,n,k) -atmostkdifferentintergers(a,n,k-1);
        
    }
};