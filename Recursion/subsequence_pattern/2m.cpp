
https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=generate-all-possible-parentheses

class Solution
{
    void solve(int open,int close,vector<string>&v,string op){
        if(open==0 && close==0){
            v.push_back(op);
            return;
        }
        if(open!=0){
            string op1=op;
            op1.push_back('(');
            solve(open-1,close,v,op1);
        }
        
        if(close>open){
            string op2=op;
            op2.push_back(')');
            solve(open,close-1,v,op2);
        }
    }
    
    void solve1(int open,int close,vector<string>&v,string op){
        if(open==0 && close==0){
            v.push_back(op);
            return;
        }
        if(open!=0){
            string op1=op;
            op1.push_back('(');
            solve(open-1,close,v,op1);
        }
        
        if(close>open){
            string op2=op;
            op2.push_back(')');
            solve(open,close-1,v,op2);
        }
    }
    
    public:
    vector<string> AllParenthesis(int n) 
    {
        
        int open=n;
        int close=n;
        vector<string>v;
        string op="";
        
        solve(open,close,v,op);
        
        return v;
        
    }
};