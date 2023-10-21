

https://practice.geeksforgeeks.org/problems/assign-cookies/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=assign-cookies


class Solution {
  public:
    int maxChildren(int n, int m, vector<int> &g, vector<int> &s) {
      
      sort(g.begin(),g.end());
      sort(s.begin(),s.end());
      
      int i=0,j=0;
      int count=0;
      
      while(i<n && j<m)
      {
          if(s[j]>=g[i]){
              count++;
              i++;
              j++;
          }
          else{
              j++;
          }
      }
      
      return count;
    }
};
