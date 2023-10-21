



https://practice.geeksforgeeks.org/problems/task-scheduler/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=task-scheduler


class Solution {
  public:
    int leastInterval(int n, int k, vector<char> &a) {
      
      
      
       /*
       unordered_map<char,int>mp;
       
       for(int i=0;i<n;i++)
       mp[a[i]]++;
       
       priority_queue<int>pq;
       
       for(auto it:mp){
           pq.push(it.second);
       }
       
       int time=0;
       
       while(!pq.empty())
       {
           vector<int>temp;
           
           for(int i=0;i<=k;i++){
               
               if(!pq.empty()){
               temp.push_back(pq.top());
               pq.pop();
               }
           }
           
           for(int i=0;i<temp.size();i++){
                    if(--temp[i]>0)
                   pq.push(temp[i]);
               
           }
           
           time+=pq.empty()?temp.size():k+1;
           
       }
       
       return time;
       
       
       */
       
       
      //efficient approach 
       unordered_map<char,int>mp;
        
        int count=0;

        for(auto it :a){
          mp[it]++;
          count =max(count,mp[it]);
       }
       int ans=(count-1)*(k+1);
       
       for(auto it:mp)
       {
           if(it.second==count)
           ans++;
       }
       
       return max(n,ans);             //ex->A=3,B=2,C=2,D=2,k=1,2
       
    }
};