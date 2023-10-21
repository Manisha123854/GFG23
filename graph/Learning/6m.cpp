
https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=dfs_of_graph
class Solution {
  public:
  void dfs(int node,vector<int>&ans,int vis[],vector<int> adj[]){
      vis[node]=1;
      
      ans.push_back(node);
      
      for(auto it:adj[node]){
          if(!vis[it]){
              dfs(it,ans,vis,adj);
          }
      }
      
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    
    int vis[V]={0};
    vector<int>ans;
    dfs(0,ans,vis,adj);
    return ans;
    }
};