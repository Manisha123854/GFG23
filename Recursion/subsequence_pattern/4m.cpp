
https://practice.geeksforgeeks.org/problems/better-string/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=better-string

class Solution {
     public:
     
    void findsub(int ind,string &s,vector<string>&v, vector<vector<string>>&ans)
    {
        ans.push_back(v);
        for(int i=ind;i<s.size();i++){
            
            if(i!=ind && s[i]==s[i-1])
            continue;
            
           
            v.push_back(s.substr(ind,i-ind+1));
            
           findsub(i+1,s,v,ans);
           
            v.pop_back();
        }
    }
    
  
    string betterString(string s1, string s2) {

         //TLE                     
       string ss1=s1;
       string ss2=s2;
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       
       vector<vector<string>>ans1;
       vector<string>v1;
        vector<vector<string>>ans2;
       vector<string>v2;
       
       findsub(0,s1,v1,ans1);
       findsub(0,s2,v2,ans2);
       
       if(ans1.size()>=ans2.size())
       return ss1;
       else
       return ss2;
       
       
    }
};