
https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

//refer to soln


int longestSubarrayWithSumK(vector<int> a, long long k) {

//BF
/*
int n=a.size();   
int maxLen=0;                            ----------------> Tc=O(n*n*n) , sc=O(1)

for(int i=0;i<n;i++){
for(int j=i;j<n;j++)  {
      long long sum=0;

      for (int k = i; k <= j; k++) 
        sum += a[k];

        if (sum == k)
          maxLen = max(maxLen, j - i + 1);
      
  }
}
  return maxLen;
*/


//Better 1

/*
int n=a.size();
int maxLen=0;                                  ----------------> Tc=O(n*n) , sc=O(1)

for(int i=0;i<n;i++){
    long long sum=0;
    for(int j=i;j<n;j++ ){
        sum+=a[j];

        if(sum==k)
        maxLen=max(maxLen,j-i+1);
    }
}
return maxLen;
*/


//Better2 
/*
map<long long,int>mp;
int n=a.size();
int maxLen=0;
long long sum=0;
                                              ---------------> Tc= O(nlogn) , sc=O(n)
for(int i=0;i<n;i++)
{
    sum+=a[i];

    if(sum==k)
    maxLen=max(maxLen,i+1);

if(mp.find(sum-k)!=mp.end())
{
    maxLen=max(maxLen,i-mp[sum-k]); 
}

if(mp.find(sum)==mp.end()){
    mp[sum]=i;
}
}

return maxLen;
*/

//Best
int n=a.size();
int left=0;
int right=0;
long long sum=a[0];                      //--------------> Tc=O(2*n) , sc=O(1)
int maxLen=0;

while(right<n)               
{
    while(left<=right && sum>k){
        sum-=a[left];
        left++;
    }
    if(sum==k){
        maxLen=max(maxLen,right-left+1);
    }
    right++;
    if(right<n)
    sum+=a[right];
}

return maxLen;
}