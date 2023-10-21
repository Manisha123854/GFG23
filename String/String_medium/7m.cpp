
https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/

class Solution {
public:
    int beautySum(string s) {                    


        
/*
int n=s.length();
int ans=0;

for(int i=0;i<n;i++){
    int h[26]={0};                                 //------------>Tc=O(n*n*k),sc=O(n)
for(int j=i;j<n;j++){
    h[s[j]-'a']+=1;
      int maxFreq=0, minFreq=INT_MAX;

      for(int k=0;k<26;k++){
        if(h[k]>0){
            maxFreq=max(maxFreq,h[k]);
            minFreq=min(minFreq,h[k]);
          }
        }
         ans+=(maxFreq-minFreq);
}
}
return ans;
*/



            int n=s.length();                               //------------>Tc=O(n*n),sc=O(n)
            int ans=0;
            for(int i=0;i<n;i++){
                unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
                 mp[s[j]]++;
            int maxFreq=0, minFreq=INT_MAX;
            for(auto it:mp){
                 maxFreq=max(maxFreq,it.second);
                    minFreq=min(minFreq,it.second);
                }

            ans+=maxFreq-minFreq;
        }
        }
        return ans;


    }
};