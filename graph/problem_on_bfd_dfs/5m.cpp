

https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph
class Solution {
  public:
  
  bool bfs(int src,int vis[],vector<int> adj[]){
     
      vis[src]=1;
      queue<pair<int,int>>q;
      q.push({src,-1});
      while(!q.empty()){
          int node=q.front().first;
          int parent=q.front().second;
          q.pop();
          
          for(auto adjacentNode:adj[node]){
              if(!vis[adjacentNode]){
                  vis[adjacentNode]=1;
                  q.push({adjacentNode,node});
              }
              else if(parent!=adjacentNode)
              return true;
          }
          
      }
      
      return false;
      
  }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        int vis[V]={0};
        
     for(int i=0;i<V;i++){
         
         if(!vis[i])
         {
             
            if((bfs(i,vis,adj)))
            return true;
         }
     }
     
     return false;
    }
};
