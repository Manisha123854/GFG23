

https://practice.geeksforgeeks.org/problems/minimum-window-subsequence/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-window-subsequence

class Solution {
  public:
    string minWindow(string s1, string s2) {
      
      int i=0,j=0,k=0;
      int ans=INT_MAX;
      string str;
      while(j<s1.length() && k<s2.length() ){
          
          if(s1[j]==s2[k])
          k++;
          if(k==s2.length()){
              i=j;
              k=s2.length()-1;
              
              while(i>=0 && k>=0){
                  if(s1[i]==s2[k])
                  k--;
                  i--;
              }
              i++;
              
              if(j-i+1<ans)
              {
                  ans=j-i+1;
                  str=s1.substr(i,j-i+1);
                  
              }
              
              k=0;
          }
          j++;
      }
      
      
      
      
      return str;
      
      
      
      
    }
};
