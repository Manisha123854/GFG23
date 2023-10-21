
https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=distance-of-nearest-cell-having
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>a)
	{
	    int n=a.size();
	    int m=a[0].size();
	    	vector<vector<int>>vis(n,vector<int>(m,0));
	    	
	    	vector<vector<int>>dis(n,vector<int>(m,0));
	    	queue<pair<pair<int,int>,int>>q;
	    	
	    	for(int i=0;i<n;i++){
	    	    for(int j=0;j<m;j++){
	    	        if(a[i][j]==1){
	    	            q.push({{i,j},0});
	    	            vis[i][j]=1;
	    	        }
	    	        else
	    	        {
	    	            vis[i][j]=0;
	    	        }
	    	    }
	    	}
	    	
	    	int delRow[]={-1,0,+1,0};
	    	int delCol[]={0,+1,0,-1};
	    	
	    	while(!q.empty())
	    	{
	    	    int row=q.front().first.first;
	    	    int col=q.front().first.second;
	    	    int step=q.front().second;
	    	    q.pop();
	    	    
	    	    dis[row][col]=step;
	    	    
	    	    for(int i=0;i<4;i++){
	    	        int nrow=row+delRow[i];
	    	        int ncol=col+delCol[i];
	    	        
	    	        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0){
	    	            vis[nrow][ncol]=1;
	    	            q.push({{nrow,ncol},step+1});
	    	            
	    	        }
	    	    }
	    	}
	    	
	    	return dis;
	    	
	    
	}
};
