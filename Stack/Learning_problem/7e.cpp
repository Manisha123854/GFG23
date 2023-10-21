


https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=parenthesis-checker

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
           st.push(s[i]);
        else{
            if(st.empty())
            return false;
            
            char ch=st.top();
            st.pop();
            
            if((ch=='(' && s[i]==')')   || (ch=='{' && s[i]=='}')|| (ch=='[' && s[i]==']'))
            continue;
            else
            return false;
        }
            
            
        }
        
        if(st.empty())
        return true;
        else
        return false;
        
        
    }

};