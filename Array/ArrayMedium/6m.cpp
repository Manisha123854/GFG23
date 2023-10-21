


https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>&a ) {


int n=a.size();

//BF
/*
int mxProfit=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++){
        if(a[j]>a[i])
        mxProfit= max(mxProfit,(a[j]-a[i]));
    }
}

return mxProfit;
*/


//Best

int minele=INT_MAX;
int maxProfit=0;
for(int i=0;i<n;i++){
  if(a[i]<minele)  
  minele=a[i];

if((a[i]-minele)>maxProfit)
maxProfit=a[i]-minele;

}

return maxProfit;
 }
};