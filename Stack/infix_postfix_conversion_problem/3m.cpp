

https://practice.geeksforgeeks.org/problems/prefix-to-postfix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-postfix-conversion

class Solution {
  public:
    string preToPost(string s) {
        
        
     
        int n=s.size();
       stack<string>st;
       
          // prefix me operand baad me aate h operator se 
       for(int i=n-1;i>=0;i--){
           if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
               string s1=st.top();
               st.pop();
               string s2=st.top();
               st.pop();
               
               string s3=s1+s2+s[i];
               st.push(s3);
           }
           else
           {
               string temp(1,s[i]);
               st.push(temp);
              
           }
       }
        
        
 return st.top();
        
    }
};