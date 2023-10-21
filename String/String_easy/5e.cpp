

https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=isomorphic-strings

/*
Input:
str1 = aab
str2 = xxy
Output: 1
Explanation: There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.
Example 2:

Input:
str1 = aab
str2 = xyz
Output: 0
Explanation: There are two different
charactersin aab but there are three
different charactersin xyz. So there
won't be one to one mapping between
str1 and str2.
*/



class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        
        // Your code here
                                                Tc=O(n),sc=O(1)
       
        int n=s1.size();
        int m=s2.size();
        
        if(n!=m)
        return false;
        
        map<char,char>mp1,mp2;
        
        for(int i=0;i<n;i++){
          if(!mp1[s1[i]] && !mp2[s2[i]]) {
              mp1[s1[i]]=s2[i];
              mp2[s2[i]]=s1[i];
              
          }
          else if(mp1[s1[i]]!=s2[i])
              return false;
          
        }
        
        
        return true;
        
    }
};