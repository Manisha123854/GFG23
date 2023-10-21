


https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=the-celebrity-problem

class Solution 
{
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        
      /*  
        int indegree[n]={0};
        int outdegree[n]={0};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                int x=m[i][j];
                   
                 outdegree[i]+=x;
                indegree[j]+=x;
                
            }
        }
        for(int i=0;i<n;i++){
            
            if(indegree[i]==n-1 && outdegree[i]==0)
            return i;
        }
        return -1;
        */
        
        
        stack<int>st;
        
        for(int i=0;i<n;i++)
        st.push(i);
        
        
        while(st.size()>1){
            int first=st.top();
            st.pop();
            int second=st.top();
            
            st.pop();
            
            if(m[first][second])
            st.push(second);
            else
            st.push(first);
        }
        
        int cle=st.top();
        st.pop();
        
        for(int i=0;i<n;i++)
        {
            if((i!=cle) && (m[cle][i] || !m[i][cle]))
            return -1;
        }
        
        return  cle;
        
        /*
        
        int a=0;
        int b=n-1;
        
        while(a<b){
            if(m[a][b])
            a++;
            else
            b--;
        }
        
        
          for(int i=0;i<n;i++)
        {
            if((i!=a) && (m[a][i] || !m[i][a]))
            return -1;
        }
        
        return  a;
        */
        
        
    }
};