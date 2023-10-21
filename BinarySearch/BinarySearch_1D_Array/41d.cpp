
https://leetcode.com/problems/search-insert-position/submissions/

class Solution {
public:
    int searchInsert(vector<int>&a, int x) {
        /*int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]>=x)
            return  i;
        }
    
    return n;
    */

int n=a.size();
int low=0;
int high=n-1;
int ans=n;
while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]>=x){
        ans=mid;
        high=mid-1;
    }
    else
    low=mid+1;
}

return ans;

    }
};