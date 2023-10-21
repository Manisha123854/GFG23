


https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=next-larger-element



class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> a, int n){
        // Your code here
        
        /*
        vector<long long>v;
        for(int i=0;i<n;i++){
            int f=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    v.push_back(a[j]);
                    f=1;
                    break;
                }
            }
            
            if(f==0)
            v.push_back(-1);
        }
        
        return v;
        */
        
        
        /*
        vector<long long>v;
        stack<long long>st;
        for(int i=n-1;i>=0;i--){
            
            if(v.size()==0)
            v.push_back(-1);
            
           else if(st.size()>0 && st.top()>a[i])
            v.push_back(st.top());
            
            else if(st.size()>0 && st.top()<=a[i]){
                
            while(st.size()>0 && st.top()<=a[i])
            st.pop();
            
            if(st.size()==0)
            v.push_back(-1);
            else
            v.push_back(st.top());
            }
            
            st.push(a[i]);
            
        }
            
            reverse(v.begin(),v.end());
            return v;
            
            */
            
            
            vector<long long>v(n,0);
            stack<long long>st;
            
            for(int i=n-1;i>=0;i--){
                
                while(!st.empty() && st.top()<=a[i])
                st.pop();
                
                if(st.empty())
                v[i]=-1;
                else
                v[i]=st.top();
                
                st.push(a[i]);
            }
            
            
            return v;
    
        
    }
};