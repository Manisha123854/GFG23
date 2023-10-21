

https://practice.geeksforgeeks.org/problems/implement-atoi/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-atoi


class Solution{
  public:
    /*You are required to complete this method */          TC=O(n),sc=O(1)
    int atoi(string s) {
        //Your code here
      
      int ans=0;
      int start=0;
      
        if(s[0]=='-')
        start=1;
        
       
        for(int i=start;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            ans=ans*10+(s[i]-'0');
            else
            return -1;
            
        }
        if(start==1)
        return -ans;
        else
        return ans;
        
    }
};