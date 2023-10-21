

https://practice.geeksforgeeks.org/problems/longest-repeating-character-replacement/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-repeating-character-replacement


class Solution {
  public:
    int characterReplacement(string s, int k) {
       /*
       
       int res=0,maxfreq=0;
       int n=s.size();
   
    for(int i=0;i<n;i++){
     unordered_map<char,int>mp;
     
    for(int j=i;j<n;){
        
        mp[s[j++]]++;
        maxfreq=max(maxfreq,mp[s[j-1]]);
        while(j-i-maxfreq>k)
        {
            mp[s[i++]]--;
            
        }
        
        res=max(res,j-i);
      
    }
    }
       
        return res;*/
       
     
       
        
       
        vector<int>v(26,0);
        int n=s.size();
        int start=0;
        int end=0;
        int maxfreq=0;
        int maxlen=0;
        
        while(end<n){
            v[s[end++]-'A']++;
            
            maxfreq=max(maxfreq,v[s[end-1]-'A']);
            
            
            while(end-start-maxfreq>k){
                v[s[start++]-'A']--;
                maxfreq=* max_element(v.begin(),v.end());
            }
            
            
            maxlen=max(maxlen,end-start);
        }
        
        
        return maxlen;
        
       
        
    }
};