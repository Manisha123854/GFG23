


https://practice.geeksforgeeks.org/problems/count-substring/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-substring


class Solution {
  public:
    int countSubstring(string s) {
  
  
  /*
   int n=s.size();
   int ans=0;
   for(int i=0;i<n;i++) {
       
   for(int j=i;j<n;j++)  {
            
            
unordered_set<int> st(s.begin()+i,s.begin()+j+1);
       
   
               if(st.size()>=3)
                    ans+=i;
            
   }        
             
   }
   
   if(s.size()==3)
   return 1;
 return ans;
     
*/     
     
     
    vector<int>v(3,0);
     int i=0,j=0;
     int count=0;
     
    while(j<s.size())
      {
          v[s[j]-'a']++;
          
        while(v[0]!=0 && v[1]!=0 && v[2]!=0){
            v[s[i]-'a']--;
            i++;
        }
        
        
        count+=i; 
         j++;
      }
            
        
     return count;
     
     
     
    }
};