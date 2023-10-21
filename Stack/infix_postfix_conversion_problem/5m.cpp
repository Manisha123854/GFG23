

https://practice.geeksforgeeks.org/problems/postfix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion


class Solution {
    
   public:
    string postToInfix(string s) {
       
        
        int n=s.size();
        stack<string>st;
        
        for(int i=0;i<n;i++){
        
            if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
            {
                string s1= st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                
                //string s3= '('+s2+s[i]+s1+')';
                //  st.push(s3);
                
                st.push( '('+s2+s[i]+s1+')');
                
                }
                
            else{
                string temp(1,s[i]);
                st.push(temp);
                //st.push(string(1,s[i]));
            }
            
        }
        
        return st.top();
        

        
    }
};