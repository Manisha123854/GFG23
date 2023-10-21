
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>&a) {
        
      /*  int n=a.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<ans){
                ans=a[i];
            }
        }
        return ans;
*/

int n=a.size();
int low=0;
int high=n-1;
int ans=INT_MAX;
while(low<=high){
    int mid=(low+high)/2;
    if(a[low]<=a[mid]){
        ans=min(ans,a[low]);
        low=mid+1;
    }
    else{
        ans=min(ans,a[mid]);
        high=mid-1;
    }

}

return ans;

    }
};