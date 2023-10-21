

https://practice.geeksforgeeks.org/problems/maximum-nesting-depth-of-the-parentheses/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-nesting-depth-of-the-parentheses


class Solution {
  public:
    int maxDepth(string s) {
      
        int c=0;
        int max_cnt=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            c++;
            else if(s[i]==')')
            c--;
            max_cnt=max(max_cnt,c);
        }
           return max_cnt; 
    }
};
