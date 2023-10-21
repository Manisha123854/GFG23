

https://practice.geeksforgeeks.org/problems/count-number-of-substrings4528/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-number-of-substrings

class Solution
{
        long long int countAtMostKSubstr(string &s,int k){
      	
    	int n=s.length();
    	int i=0;
    	int j=0;
    	int dis_cnt=0;
    	long long int ans=0;
    	// Array to store count of characters.
         int h[26]={0};
    
    	
    	while(j<n){
    	    
    	      // Index for current character.
    	    int idx=s[j]-'a';
    	    
    	    
        // Increment count for the current character.
    	    h[idx]+=1;
    	    
    	    if(h[idx]==1)
    	    dis_cnt++;
    	    
    	   // Decrement count and increase ith pointer.
    	    while(dis_cnt>k){
    	        
    	        h[s[i]-'a']--;
    	        
    	        if(h[s[i]-'a']==0)
    	        dis_cnt--;
    	        i++;
    	    }
    	     // Total substrings.
    	    ans+=(j-i+1);
    	    
    	    j++;
    	}
    	return ans;
    	  
    }
  
   public:
    long long int substrCount (string s, int k) {
        
        //BF
        
    /*int n=s.length();                           //-------------->TC=O(N*N*N),sc=O(N)
    int ans=0;
     
     for(int i=0;i<n;i++){
         
         for(int j=i;j<n;j++){
             
             string ss =s.substr(i,j-i+1);
             
             unordered_map<char,int>mp;
             
             for(int i=0;i<ss.length();i++){
                 mp[ss[i]]++;
             }
             
             if(mp.size()==k)
             ans++;
             }
         }
        return ans;
        */
      
      
      /*int n=s.length();
      int ans=0;
      
      for(int i=0;i<n;i++){           //---------->Tc=O(n*n),sc=O(1)
          
         int dis_cnt=0;
          int h[26]={0};
          for(int j=i;j<n;j++){
              
              h[s[j]-'a']+=1;
              
              if(h[s[j]-'a']==1)
              dis_cnt++;
              
              if(dis_cnt==k)
              ans++;
          }
          
      }
      
      return ans;
      
      */
      
      
     // Calculating for at most k and at most k-1 distinct chars.
   long long int ans =countAtMostKSubstr(s,k)-countAtMostKSubstr(s,k-1);            //---->Tc=O(n),sc=O(1)
    return ans;
    
}
};