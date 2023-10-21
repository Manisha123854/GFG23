
https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>&a) {
        int n=a.size();

/*
        if(n==1)
        return a[0];

        for(int i=0;i<n;i++){

            if(i==0){
                if(a[i]!=a[i+1])
                return a[i];
            }
            else if(i==n-1){
                if(a[i]!=a[i-1])
                return a[i];
            }
            else
            {
                if((a[i]!=a[i+1])&& (a[i]!=a[i-1]))
                return a[i];
            }

        }

  return -1;
  */

if(n==1)
return a[0];

if(a[0]!=a[1])
return a[0];
if(a[n-1]!=a[n-2])
return a[n-1];

int low=1;
int high=n-2;
while(low<=high){
      int mid=(low+high)/2;

      if((a[mid]!=a[mid-1]) && (a[mid]!=a[mid+1]))
      return a[mid];

//we are in left half
if((mid%2==0 && a[mid]==a[mid+1]) ||(mid%2==1 && a[mid-1]==a[mid]))
            low=mid+1;
// we are in right half            
else
high=mid-1;
  
  
  }

return -1;
}
};