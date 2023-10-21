
https://practice.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion

class Solution {
  public:
    string postToPre(string s) {
       
       stack<string>st;
       
       
       for(int i=0;i<s.size();i++){
             
         if(s[i]=='+' ||s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^') {
             string s1=st.top();
             st.pop();
             string s2=st.top();
             st.pop();
             
             string s3= s[i]+s2+s1;
             st.push(s3);
         } 
         else{
             string temp(1,s[i]);
             st.push(temp);
         }
           
       }
       
       return st.top();
       
    }
};