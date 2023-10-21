
https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph

class Solution {
    bool dfs(int node,int parent,int vis[],vector<int> adj[] ){
        vis[node]=1;
        
        for(auto adjacentNode:adj[node]){
            if(!vis[adjacentNode]){
                if(dfs(adjacentNode,node,vis,adj)==true)
                return true;
            }
            else if(adjacentNode!=parent)
            return true;
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       
       int vis[V]={0};
       
       
       for(int i=0;i<V;i++){
           if(!vis[i]){
               if(dfs(i,-1,vis,adj))
               return true;
           }
       }
       return false;
       
    }
};
