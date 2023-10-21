
https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-k-sorted-arrays


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>>a, int k)
    {
        /*
         vector<int>v;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k;j++)
            {
                v.push_back(a[i][j]);
            }
        }
        
        sort(v.begin(),v.end());
        
        return v;
        */
        
        
        
        vector<int>v;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        
        
        for(int i=0;i<k;i++)
        pq.push({a[i][0],{i,0}});
       
       
       while(pq.size()){
           pair<int,pair<int,int>>p=pq.top();
           pq.pop();
           
           
           int value=p.first;
           int li= p.second.first;
           int di=p.second.second;
           
           v.push_back(value);
           
           if(di+1<a[li].size())
           pq.push({a[li][di+1],{li,di+1}});
       }
        
        
       return v;
       
    }
};