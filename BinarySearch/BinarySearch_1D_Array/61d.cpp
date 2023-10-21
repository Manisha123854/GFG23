
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/

class Solution {
public:

int firstIndex(vector<int>&a, int x){
   int n=a.size();
   int low=0,high=n-1;
   int first=-1;
while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==x){
        first=mid;
        high=mid-1;
    }
    else if(a[mid]<x)
    low=mid+1;
    else
    high=mid-1;
}
return first;
}

int lastIndex(vector<int>&a, int x){
   int n=a.size();
   int low=0,high=n-1;
   int last=-1;
while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==x){
        last=mid;
        low=mid+1;
    }
    else if(a[mid]<x)
    low=mid+1;
    else
    high=mid-1;
}
return last;
}

    vector<int> searchRange(vector<int>&a, int target) {
 vector<int>v;
 int n=a.size();
/*int first=-1;
int last=-1;

for(int i=0;i<n;i++){
    if(a[i]==target){
    if(first==-1)
    first=i;
    last=i;
    }
}
v.push_back(first);
v.push_back(last);
return  v;
*/

int first=firstIndex(a,target);
int last=lastIndex(a,target);
v.push_back(first);
v.push_back(last);

return v;
        
}
};