

https://practice.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty[]=-1&page=1&query=problemTypefunctionaldifficulty[]-1page1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-all-factorial-numbers-less-than-or-equal-to-n


class Solution
{
    void factnnumner(long long n, long long fact,long long x,vector<long long>&v){


       if(fact>n)
        return ;
        
        v.push_back(fact);
        
        factnnumner(n,fact*x,x+1,v);
}
    
public:
    vector<long long> factorialNumbers(long long n)
    {
      
      /*
       vector<long long>v;
       long long fact=1;
      
        long long x=2;
      
          while(fact<=n){
              v.push_back(fact);
              fact=fact*x;
              x++;
              
         }
        
       return v;
       */
        
        
        
        vector<long long>v;
       factnnumner(n,1,2,v);
      return v;
        
    }
};