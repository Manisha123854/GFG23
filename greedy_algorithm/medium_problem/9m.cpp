
https://practice.geeksforgeeks.org/problems/insert-interval-1666733333/1


class Solution {
  public:
    vector<vector<int>> insertNewEvent(int N, vector<vector<int>> &intervals, vector<int> &newInterval) {
       
        
      /*  int i=0;
        while(i<intervals.size()){
            
            if(intervals[i][1]<newInterval[0])
            i++;
            else if(intervals[i][0]>newInterval[1])
            {
               intervals.insert(intervals.begin()+i,newInterval);
                return intervals;
            }
            else
            {
                newInterval[0]=min(intervals[i][0],newInterval[0]);
                 newInterval[1]=max(intervals[i][1],newInterval[1]);
                 intervals.erase(intervals.begin()+i);
            }
        }
        intervals.push_back(newInterval);
        return intervals;
        
        */
        
        
        int n=intervals.size();
        vector<vector<int>>v;
        int i=0;
       
       
       while(i<n){
           
       
            if(intervals[i][1]<newInterval[0]){
            v.push_back(intervals[i]);
            }
            
            else if(intervals[i][0]>newInterval[1]){
                        break;
            }
            else
            {
                 newInterval[0]=min(intervals[i][0],newInterval[0]);
                 newInterval[1]=max(intervals[i][1],newInterval[1]);
            }
            
            i++;
        }
        
        v.push_back(newInterval);
        
    while(i<n)
    {
         v.push_back(intervals[i]);
         i++;
    }
        return v;
        
    }
};