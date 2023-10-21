

https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-k-unique-characters-substring



class Solution{
  public:
    int longestKSubstr(string s, int k) {
        //BF
      /*  
        int n=s.size();
       int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                unordered_set<char>st(s.begin()+i,s.begin()+j);
             
                
                if(st.size()==k)
                ans=max(ans,j-i+1);
            }
        }
       return ans;
 */
 

    int start=0;
    int end=0;
    int maxLength=0;
    
    unordered_map<char,int>mp; 
    
    while(end<s.size()){
        
        mp[s[end++]]++;
        
        while(mp.size()>k){
            mp[s[start++]]--;
            if(mp[s[start-1]]==0)
            mp.erase(s[start-1]);
        }
        
        maxLength=max(maxLength,end-start);
        
    }
    //aaaa,k=2-->no 2 different character
    if(mp.size()<k)
    return -1;
    else
    return maxLength;
 
 
    }
};