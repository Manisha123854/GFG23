
https://practice.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-provinces

class Solution {
    
    void dfs(int node,int vis[], vector<int>adj[]){
        
        vis[node]=1;
        
        for(auto it:adj[node]){
            
            if(!vis[it]){
                 dfs(it,vis,adj);
            }
        }
    }
    
  public:
    int numProvinces(vector<vector<int>>a, int V) {
    
      vector<int>adjLs[V];
     
     // to change adjacency  matrix to list
     
       for(int i=0;i<V;i++){
          for(int j=0;j<V;j++)
          {
              if(a[i][j]==1 && (i!=j)){
              adjLs[i].push_back(j);
               adjLs[j].push_back(i);
              }
          }
      }
      
      
      int vis[V]={0};
      int cnt=0;
      
      for(int i=0;i<V;i++)
       {
           
        if(vis[i]==0){
            cnt++;
            dfs(i,vis,adjLs);
          
        }
    }
    
    return cnt;
    
      
      
      
    }
};