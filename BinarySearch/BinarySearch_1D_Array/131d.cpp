
https://leetcode.com/problems/find-peak-element/description/


class Solution {
public:
    int findPeakElement(vector<int>&a) {
        int n=a.size();
        /*for(int i=0;i<n;i++){
            if((i==0 || a[i-1]<a[i]) && (i==n-1 ||a[i]>a[i+1]))
            return i;

        }

        return -1;
        */

if(n==1)
return 0;
if(a[0]>a[1])
return 0;
if(a[n-1]>a[n-2])
return n-1;
int low=1;
int high=n-2;
while(low<=high){
    int mid=(low+high)/2;
if((a[mid-1]<a[mid]) && (a[mid]>a[mid+1]))
        return mid;

  else  if(a[mid]>a[mid-1])
    low=mid+1;
    else
    high=mid-1;

}

return -1;

    }
};