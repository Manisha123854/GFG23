

https://practice.geeksforgeeks.org/problems/max-rectangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-rectangle


class Solution{
    
    int MAH(vector<int>&a){
        int n=a.size();
        
        stack<int>st;
        int maxA=INT_MIN;
        
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || a[st.top()]>=a[i])){
                int height=a[st.top()];
                st.pop();
                int width;
                
                if(st.empty())
                width=i;
                else
                width=i-st.top()-1;
                
                maxA= max(maxA,height*width);
                
            }
            st.push(i);
            
        }
        
        return maxA;
        
    }
    
  public:
    int maxArea(int a[MAX][MAX], int n, int m) {
        // Your code here
        
        vector<int>v;
        
        for(int j=0;j<m;j++)
        v.push_back(a[0][j]);
        
        int mx= MAH(v);
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==0)
                v[j]=0;
                else
                v[j]=v[j]+a[i][j];
            }
            
            mx=max(mx,MAH(v));
        }
        
        return mx;
    }
};
