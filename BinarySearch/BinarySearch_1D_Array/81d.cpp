
https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    int search(vector<int>&a, int target) {
        
        /*
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]==x)
            return i;
        }

        return -1;
        */


        int n=a.size(); 
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==target)
            return mid;
            if(a[low]<=a[mid]){
                if(target>=a[low]&& target<=a[mid])
                high=mid-1;
                else
                low=mid+1;
            }
            else{
                if(target>=a[mid] && target<=a[high]){
                    low=mid+1;
                }
                else
                high=mid-1;
            }
        }


return -1;

    }
};