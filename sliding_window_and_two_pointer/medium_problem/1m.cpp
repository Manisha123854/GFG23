

https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=length-of-the-longest-substring


class Solution{
    bool areDistinct(string s,int i,int j){
        
        unordered_map<char,int>mp;
        for(int k=i;k<=j;k++){
            
            if(mp.find(s[k])!=mp.end())
            return false;
            else
            mp[s[k]]=true;
        }
        
        return true;
    }
    
    
    public:
    int longestUniqueSubsttr(string s){
        
       
      /*  int n=s.size();
        if(n==0)
        return 0;
        
        int res=0;
       
      for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
              
            if(areDistinct(s,i,j))
            res=max(res,j-i+1);
        }
        
        
    }
      
       return res;
      */
      
     /* 
      int n=s.size();
      int left=0;
 
      int maxlen=0;
      unordered_set<int>st;
      
      for(int right=0;right<n;right++)
     {
         if(st.find(s[right])!=st.end()){
             while(left<right && st.find(s[right])!=st.end()){
                 st.erase(s[left]);
                 left++;
             }
         }
         
         st.insert(s[right]);
         maxlen=max(maxlen,right-left+1);
         
       
     }
     
     return maxlen;
    */    
        
    
   
    vector<int>mp(256,-1);
    int n=s.size();
    int left=0;
    int right=0;
    int maxlen=0;
    while(right<n){
        
        if(mp[s[right]]!=-1){
          left=max(mp[s[right]]+1,left);
        }
        
      mp[s[right]]=right;
      
      maxlen=max(maxlen,right-left+1);
      
      right++;
        
    }
    
    
    return maxlen;
    
    
    
        
    }
};