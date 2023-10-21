

https://practice.geeksforgeeks.org/problems/prefix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-infix-conversion

class Solution {
  public:
    string preToInfix(string s) {
        // Write your code here
        int n=s.size();
        stack<string>st;
        for(int i=n-1;i>=0;i--){
           
         if(s[i]=='+' ||s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^') {
             string s1=st.top();
             st.pop();
             string s2=st.top();
             st.pop();
             
             string ss='('+s1+s[i]+s2+')';
             st.push(ss);
         }  
        
        else{
            string temp(1,s[i]);
            st.push(temp);
        }
        
    }
        
        return st.top();
        
    }
};