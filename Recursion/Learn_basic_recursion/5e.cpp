
https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

long long sumFirstN(long long n) {
  

  // tc=O(n),sc=O(n)
  if(n==0)
  return 0;

  return n+sumFirstN(n-1);
  

// tc=O(1),scO(1)
  //return (n*(n+1))/2;
  
}


https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sum-of-first-n-terms

class Solution {
  public:
    long long sumOfSeries(long long n) {
    

    // tc=O(n),sc=O(1)
   /* long long sum=0;
    
    for(long long i=1;i<=n;i++)
    sum+=i*i*i;
    
    return sum;
    
    */
    

    
  // tc=O(n),sc=O(n)

    /*if(n<1)
    return 0;
    
    return  n*n*n+sumOfSeries(n-1);
    */
    

    // tc=O(1),scO(1)
    long long x= (n*(n+1))/2;
    
    return x*x;
    
    
    }
};
