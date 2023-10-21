
https://practice.geeksforgeeks.org/problems/binary-search-trees/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-search-trees

class Solution {
  public:
    bool isBSTTraversal(vector<int>&a) {
        int n=a.size();
     for(int i=0;i<n-1;i++){
         if(a[i]>=a[i+1])
         return false;
     }
     return  true;
    }
};