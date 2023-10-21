
https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=infix-to-postfix


class Solution {
    
    int prec(char ch){
        
            if(ch=='^')
            return 3;
            else if(ch=='*' ||ch=='/')
            return 2;
            else if(ch=='+' || ch=='-')
            return 1;
            else
            return -1;
        
    }
    
  public:
    // Function to convert an infix expression to a postfix expression.
    
      string infixToPostfix(string s) {
        // Your code here
        
        stack<char>st;
         string res;
         
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            res+=s[i];
            
            else if(s[i]=='(')
            st.push(s[i]);
        
            else if(s[i]==')')
            {
                while(!st.empty() && st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                if(!st.empty())
                st.pop();
            }
            else
            {
                while(!st.empty() && prec(st.top())>= prec(s[i])){
                    res+=st.top();
                    st.pop();
                }
                
                st.push(s[i]);
            }
        }
           
           
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            
        
        
        return res;
    }
};
