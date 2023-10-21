
https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-if-strings-are-rotations-of-each-other-or-not

/*
Input:
geeksforgeeks
forgeeksgeeks
Output: 
1
Explanation: s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.
 

Example 2:

Input:
mightandmagic
andmagicmigth
Output: 
0
Explanation: Here with any amount of
rotation s2 can't be obtained by s1.
 */




class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        
        //Bf
        /*int n=s1.size();
        int m=s2.size();
        
        if(n!=m)
        return false;                      //---------------->Tc=O(N*N),sc=O(1)
        
        
        for(int i=0;i<n;i++){
            
             if(s1[i]==s2[0]){
                bool f=true;
               for(int j=0;j<m;j++){
                if(s2[j]!=s1[(i+j)%m]){
                    f= false;
                 break;
                     }
            }
            
            if(f==true)
            return true;
            }
        }
      
      return false;
      */
      
      //Best
        
        if(s1.length()!=s2.length())               //------------->Tc=O(n),sc=O(1)
        return false;
        
        s1+=s1;
        int n=s2.length();
        
        for(int i=0;i<=n;i++)
        {
            string ss=s1.substr(i,n);
            if(ss==s2)
            return true;
        }
        
        return false;
        
        }
};
