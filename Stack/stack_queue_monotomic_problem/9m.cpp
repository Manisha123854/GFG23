
https://practice.geeksforgeeks.org/problems/remove-k-digits/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-k-digits



class Solution {
  public:
    string removeKdigits(string s, int k) {
        
        if(s.size()==k)
        return "0";
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            
            
            while(!st.empty() && k>0 && st.top()>s[i])
            {
                st.pop();
                k--;
            }
            
            st.push(s[i]);
        }
        
        while(k>0)
        {
            st.pop();
            k--;
        }
        
        string ans="";
        while(!st.empty()){
            ans= st.top()+ans;
            st.pop();
        }
        while(ans.size()>1 && ans[0]=='0')
        ans=ans.substr(1);
        
        return ans;
        
    }
};