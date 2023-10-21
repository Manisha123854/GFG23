

https://practice.geeksforgeeks.org/problems/asteroid-collision/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=asteroid-collision

class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &a) {
        // code here
        
         vector<int>v;
         stack<int>st;
         
         for(auto val :a){
             if(val>0)
             {
                 st.push(val);
             }
             else
             {
                 while(!st.empty()&& st.top()>0 && st.top()<-val)
                 st.pop();
                  
                 if(!st.empty() && st.top()==-val)
                 st.pop();
                 else if(!st.empty() && st.top()>-val)
                 {
                     
                 }
                 else
                 st.push(val);
             }
         }
         
         
         while(!st.empty())
         {
             v.push_back(st.top());
             st.pop();
         }
         
        reverse(v.begin(),v.end());
        
        
        return v;
    }
};