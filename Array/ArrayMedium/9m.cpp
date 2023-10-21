
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array
//own

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        
        //BF 
        
                                           // ----------------------->Tc= O(n*n), sc=O(n)
       /* vector<int>v;
        for(int i=0;i<n;i++){
            bool f=1;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i])
                {
                    f=0;
                    break;
                }
            }
            
            if(f)
            v.push_back(a[i]);
        }
           return v;
          */ 
          
          
          //Best
           vector<int> v;
           v.push_back(a[n-1]);
           int ld=a[n-1];                          //---------------> Tc= O(n, Sc=O(n))
           for(int i=n-2;i>=0;i--){
               if(a[i]>=ld)
               {
                   v.push_back(a[i]);
                   ld=a[i];
               }
           }
           
          reverse(v.begin(),v.end());
           return v;
        
        
    }
};