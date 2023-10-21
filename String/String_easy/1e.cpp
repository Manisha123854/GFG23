
https://practice.geeksforgeeks.org/problems/outermost-parentheses/1

/*
Input:
s = "(()())(())"
Output:
"()()()"
Explanation:
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".


Input:
s = "()()"
Output:
""
Explanation:
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".

*/

class Solution {                                
  public:
    string removeOuter(string& s) {
        // code here
        
        string ans;                        //--------------->Tc=O(n),sc=O(n)
        int c=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                c++;
                if(c>1)
                ans+=s[i];
            }
            else{
                if(c>1)
                ans+=s[i];
                c--;
            }
        }
        
        
        
      return ans;  
        
    }
};