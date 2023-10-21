
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-words-in-a-given-string


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        
    /*    
	stack<string>st;

        s+=".";
        string str="";
        for(int i=0;i<s.length();i++)
        {
          if(s[i]=='.'){
                st.push(str);
                str="";
            }
            else
            str+=s[i];
        }

        string ans="";
        while(st.size()!=1)
        {
            ans+=st.top()+".";
            st.pop();
        }
        ans+=st.top();

        return ans;
		*/
		
		string ans="";
		string temp="";
		int left=0;
		int right=s.length()-1;
		
		while(left<=right)
		{
		    char ch=s[left];
		    if(ch!='.'){
		        temp+=s[left];
		    }
		    else if(ch=='.'){
		      if(ans!="") 
		      ans=temp+"."+ans;
		      else
		      ans=temp;
		      temp="";
		    }
		    
		    left++;
		    
		}
		
		if(temp!=""){
		   if(ans!="") 
		      ans=temp+"."+ans;
		      else
		      ans=temp; 
		}
		
		return ans;
    } 
};
