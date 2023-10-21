

https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-stack


class Solution{
    
    void insert(stack<int> &st,int x){
        if(st.size()==0)
        st.push(x);
        else
        {
            int y=st.top();
            st.pop();
            
            insert(st,x);
            
            
            st.push(y);
        }
    }
    
public:
    void Reverse(stack<int> &st){
        
        
        
        if(st.size()==0)
        return;
        
        int x=st.top();
        st.pop();
         
         Reverse(st);
         insert(st,x);
         
         
         
         /*queue<int>q;
         while(!st.empty())
         {
             q.push(st.top());
             st.pop();
         }
         while(!q.empty()){
             st.push(q.front());
             q.pop();
         }*/
        
         
         
        
    }
};