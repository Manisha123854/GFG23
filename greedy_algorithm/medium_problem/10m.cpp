


https://practice.geeksforgeeks.org/problems/overlapping-intervals--170633/1


class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        
        /*
        int n=intervals.size();
        
        sort(intervals.begin(),intervals.end());
        
         vector<vector<int>>v;
        
        for(int i=0;i<n;i++){
            
            int start=intervals[i][0];
            int end=intervals[i][1];
            
            if(!v.empty() && end<=v.back()[1])
            continue;
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=end)
                end=max(end,intervals[j][1]);
                else
                break;
            }
            v.push_back({start,end});
        }
        
        
        return v;
        */
        
        
        
        int n=intervals.size();
        
        sort(intervals.begin(),intervals.end());
        
         vector<vector<int>>v;
         
         for(int i=0;i<n;i++){
             
             if(v.empty() || intervals[i][0]>v.back()[1])
             v.push_back(intervals[i]);
             else
             v.back()[1]=max(v.back()[1],intervals[i][1]);
         }
         
         return v;
    }
};