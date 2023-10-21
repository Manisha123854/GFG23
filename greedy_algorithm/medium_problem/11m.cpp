

https://practice.geeksforgeeks.org/problems/non-overlapping-intervals/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=non-overlapping-intervals


class Solution {
  public:
    int minRemoval(int N, vector<vector<int>> &intervals) {
      
    /*  sort(intervals.begin(),intervals.end());
      
      int n=intervals.size();
      
      int i=0,j=1;
      int count=0;
      
      while(j<n){
          
          vector<int>curr_interval=intervals[i];
          vector<int>next_interval=intervals[j];
          
          int cs=curr_interval[0];
          int ce=curr_interval[1];
          int ns=next_interval[0];
          int ne=next_interval[1];
          
          
          if(ce<=ns){       //no overlapping
              i=j;
              j++;
          }
          else if(ce<=ne){   //overlapping
              j++;
              count++;
          }
          else if(ce>ne){     //overlapping
              i=j;
              j++;
              count++;
          }
     
        }
    return count;
    
    */
      
      
      
      sort(intervals.begin(),intervals.end());
      
      int count=0;
       int i=1;
       int n=intervals.size();
       
       vector<int>last_interval=intervals[0];
       
       while(i<n)
      {
          int curr_start=intervals[i][0];
          int curr_end=intervals[i][1];
          int last_end=last_interval[1];
          
          if(last_end<=curr_start){
              last_interval=intervals[i];
          } 
          else if(last_end<=curr_end){
              count++;
            
          }
          else if(last_end>curr_end){
            
            last_interval=intervals[i];
             count++;
             
          }
          i++;
      }
      return count;
      
    }
};
