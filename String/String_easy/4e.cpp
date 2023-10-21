

https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-common-prefix-in-an-array


/*

Input:
N = 4
arr[] = {geeksforgeeks, geeks, geek,
         geezer}
Output: gee
Explanation: "gee" is the longest common
prefix in all the given strings.
Example 2:

Input: 
N = 2
arr[] = {hello, world}
Output: -1
Explanation: There's no common prefix
in the given strings.
*/


class Solution{
  public:

  
  string commonPrefixUtil(string &s1,string &s2){
      
      string res="";
      int len=min(s1.length(),s2.length());
      
      for(int i=0;i<len;i++)
      {
          if(s1[i]!=s2[i])
          break;
          
          res+=s1[i];
          
      }
      
      
      return res;
  } 
  
    
    string longestCommonPrefix (string a[], int n)
    {
        //BF
        
        /*string prefix=a[0];
        string ans;
        for(int i=1;i<n;i++){
            prefix=commonPrefixUtil(prefix,a[i]);
        }
        
        
         if(prefix.size()==0)
        return "-1";
        else
        return prefix;*/
        
        
        
        //Best
        sort(a,a+n);
        string s1=a[0];
        string s2=a[n-1];
        
        int n1=s1.size();
        int m=s2.size();
        
        int i=0,j=0;
        string ans;
        while(i<n1 && j<m){
            
            if(s1[i]==s2[j]){
                ans+=s1[i];
            }
            else
            break;
            i++;
            j++;
        }
        
        if(ans.size()==0)
        return "-1";
        else
        return ans;
        
    }
};