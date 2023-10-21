
https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=roman-number-to-integer

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        
        int n=s.length();
        int ans=0;
        unordered_map<char,int>mp{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
            
        };
        
        for(int i=0;i<n-1;i++){
            
            if(mp[s[i]]<mp[s[i+1]]){
                ans-=mp[s[i]];
            }
            else
            ans+=mp[s[i]];
        }
        ans+=mp[s[n-1]];
        
        
    return ans;
        
        
        
        
    }
};