
https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1

class Solution
{
    bool containstring(string &s,string &t){
        int m[256]={0};
      
      for(auto i:t)
      m[i]++;
      
      for(auto i:s){
          if(m[i]>0)
          m[i]--;
      }
      
      
      for(int i=0;i<256;i++){
          if(m[i]>0)
          return false;
      }
      
      return true;
        
    }
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string t)
    {
        
        // tc=o(n*n*n),sc=O(n)
        
       /* int minlength=INT_MAX;
        int start=0;
        string ans;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                string ss= s.substr(i,j-i+1);
                
                if(containstring(ss,t)){
                    
                    int currentlength=ss.length();
                    if(currentlength<minlength){
                        minlength=currentlength;
                        ans=ss;
                    }
                }
            }
        }
        
        return ans;
        */
        
        
        //Best and efficient approach  , Tc=O(s),sc=O(1)
        int m[256]={0};
        int count=0;
        
        for(int i=0;i<t.size();i++){
            if(m[t[i]]==0)
            count++;
            
            m[t[i]]++;
        
        }
        int i=0;
        int j=0;
        int minlength=INT_MAX;
        int startindex=0;
        
         // Traversing the window
        while(j<s.size()){
             // Calculations
            m[s[j]]--;
            if(m[s[j]]==0)
            count--;
            
             // Condition matching
            if(count==0){
                while(count==0){
                    
                    
                    if(j-i+1<minlength){
                        minlength=j-i+1;
                        startindex=i;
                    }
                    
                // Sliding I
                // Calculation for removing I

                    m[s[i]]++;
                     if(m[s[i]]>0)
                    count++;
                    
                    i++;
                }
            }
            j++;
            
        }
        
        if(minlength!=INT_MAX)
        return s.substr(startindex,minlength);
        else
        return "-1";
        
        
        
        
        
        
        
        
        
        /* 3approach------> it is giving TLE on gfg but submitting on leetcode.

      /* if(s.size()==0||s.length()<t.length())
       return "";
       
       int n=t.size();
       
        unordered_map<char,int>mp;
      for(int i=0;i<n;i++)
      mp[t[i]]++;
      
        int count=0;
        int start=0;
        int minlength=0;
        int minleft=0;
        
        for(int i=0;i<s.size();i++){
            
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if(mp[s[i]]>=0)
                count++;
            }
            
            while(count==t.length()){
                
                if(i-start+1<minlength){
                    minlength=i-start+1;
                    minleft=start;
                }
                
                
                if(mp.find(s[start])!=mp.end()){
                    
                    mp[s[start]]++;
                    if(mp[s[start]]>0)
                    count--;
                    
                    start++;
                }
            }
        }
     
     if(minlength>s.length())
     return "";
       
        return s.substr(minleft,minlength);
        
        */
}
};





























https://leetcode.com/problems/minimum-window-substring/solutions/4065634/minimum-window-substring-c-solution/

class Solution {
public:
    string minWindow(string s, string t) {

        if(s.length()==0 || s.length()<t.length())
       return "";
       
        unordered_map<char,int>mp;
        
        for(int i=0;i<t.size();i++)
        mp[t[i]]++;
        
        int count=0;
        int start=0;
        int minlength=INT_MAX;
        int minleft=0;
        for(int i=0;i<s.size();i++){
            
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if(mp[s[i]]>=0)
                count++;
            }
            
            while(count==t.length()){
                
                if(i-start+1<minlength){
                    minlength=i-start+1;
                    minleft=start;
                }
                
                
                if(mp.find(s[start])!=mp.end()){
                    mp[s[start]]++;
                    if(mp[s[start]]>0)
                    count--;
                }
                    start++;
                
            }
        }
     
     if(minlength>s.length())
     return "";
       
        return s.substr(minleft,minlength);
        

                
    }
};