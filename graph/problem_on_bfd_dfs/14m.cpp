

https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-a-directed-graph


class Solution {
    bool dfs(int node,int parent,int vis[],int pathvis[],vector<int> adj[]){
       
        vis[node]=1;
        pathvis[node]=1;
        
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,node,vis,adj)){
                    return true;
                }
            }
            else if(pathvis[it])
            return true;
        }
        
        pathvis[node]=0;
        
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
     
     int vis[V]={0};
     int pathvis[v]={0};
     
     for(int i=0;i<V;i++){
         if(!vis[i]){
         if(dfs(i,vis,pathvis,adj))
         return true;
         }
     }
     return false;
     
    }
};
