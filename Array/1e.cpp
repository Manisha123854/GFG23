
https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array

// solved by my own

class Solution
{
public:
    int largest(vector<int> &a, int n)
    {
        
        //BF
        /*sort(a.begin(),a.end());     ---------------------------> Tc= O(nlong), sc=O(1)
        return a[n-1];
        */
        
        //Best
        int max=INT_MIN;                    // ------------------------------------>Tc= O(n) , sc=O(1)
        for(int i=0;i<n;i++){
          if(a[i]>max)  
          max=a[i];
        }
        
        
        return max;
    }
};