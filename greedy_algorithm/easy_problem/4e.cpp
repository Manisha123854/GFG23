
https://practice.geeksforgeeks.org/problems/lemonade-change/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=lemonade-change

//youtube channel==Deepak Joshi 

class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &a) {
        
        
        int countfive=0;
        int countten=0;
        
       for(int i=0;i<n;i++) {
           
           if(a[i]==5)
           countfive++;
           
           else if(a[i]==10){
               
               if(countfive>=1){
               countfive--;
               countten++;
               }
               else
               return false;
           }
           
           else
           {
               if(countfive>=1 && countten>=1)
               {
                   countfive--;
                   countten--;
               }
               else if(countfive>=3){
                   countfive-=3;
               }
               
               else
               return false;
               
           }
       }
       
       return true; 
        
        
    }      
};