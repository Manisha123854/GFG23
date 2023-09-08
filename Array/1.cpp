
class Solution
{
public:
    int largest(vector<int> &a, int n)
    {
        
        
        /*sort(a.begin(),a.end());
        return a[n-1];
        */
        
        
        int max=INT_MIN;
        for(int i=0;i<n;i++){
          if(a[i]>max)  
          max=a[i];
        }
        
        
        return max;
    }
};