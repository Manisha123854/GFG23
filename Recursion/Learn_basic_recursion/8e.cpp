



https://practice.geeksforgeeks.org/problems/palindrome-string0817/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=palindrome-string

class Solution{
public:	
	
	int usingRecursionPalindrome(int i,string s){
	    
	    int n=s.size();
	    if(i>=n/2)
	    return true;
	    
	    if(s[i]!=s[n-1-i])
	    return false;
	    
	    return usingRecursionPalindrome(i+1,s);
	}
	
	int isPalindrome(string s)
	{
	    
	   // int x= usingRecursionPalindrome(0,s);
	   // return x;
	   
	   int n=s.size();
	   for(int i=0;i<n/2;i++)
	   {
	       if(s[i]!=s[n-1-i])
	       return false;
	       
	   }
	    
	    return true;
	}

};
