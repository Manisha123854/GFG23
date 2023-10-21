

https://practice.geeksforgeeks.org/problems/good-numbers4629/1

class Solution {
    
    bool isValid(int n,int d) {
        
        int digit=n%10;
        
        if(digit==d)
        return false;
        
        int sum=digit;
        n=n/10;
        
        while(n>0){
            
            digit=n%10;
            
            if(digit==d || digit<=sum){
            return false;
            }
            else
            {
                sum+=digit;
                n=n/10;
            }
            
        }
        
        return true;
        
    }
    
  public:
    vector<int> goodNumbers(int L, int R, int D) {
      
      vector<int>v;
      
      
      for(int i=L;i<=R;i++){
          
          if(isValid(i,D))
          {
              v.push_back(i);
          }
      }
        
        return v;
    }
};