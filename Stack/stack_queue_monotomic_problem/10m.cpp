



https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-rectangular-area-in-a-histogram


class Solution
{
     vector<long long>getNSL(long long a[],int n){
         vector<long long>v;
         stack<long long>st;
         
        for(int i=0;i<n;i++){
            
            while(!st.empty() && a[st.top()]>=a[i])
            st.pop();
            
            if(st.empty())
            v.push_back(-1);
            else
            v.push_back(st.top());
            
            
            st.push(i);
            
        }
        
        return v;
    }
    
    
    vector<long long>getNSR(long long a[],int n){
         vector<long long>v;
         stack<long long>st;
         
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && a[st.top()]>=a[i])
            st.pop();
            
            if(st.empty())
            v.push_back(n);
             else
            v.push_back(st.top());
            
            
            st.push(i);
            
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
    
   
  vector<long long> NSL(long long a[],int n)
        {
        vector<long long>vec;
        stack<pair<long long,long long>>s;
        
        for(int i=0;i<n;i++) {
            if(s.size()==0)
            vec.push_back(-1);
        else if(s.size()>0 && a[i]>s.top().first)
        {
        vec.push_back(s.top().second);
        }
        else if(s.size()>0 && a[i]<=s.top().first)
        {
        while(s.size()>0 && a[i]<=s.top().first)
        {
        s.pop();
        }
        if(s.size()==0)
        {
        vec.push_back(-1);
        }
        else
        {
        vec.push_back(s.top().second);
        }
        }
        s.push({a[i],i});
        }
        return vec;
        }
        

        
 vector<long long> NSR(long long a[],int n) {
     
        vector<long long>vec;
        stack<pair<long long,long long>>s;
        
        for(int i=n-1;i>=0;i--)
        {
        if(s.size()==0)
        {
        vec.push_back(n);
        }
        else if(s.size()>0 && s.top().first<a[i]) 
        vec.push_back(s.top().second);
        else if(s.size()>0 && s.top().first>=a[i])
        {
        while(s.size()>0 && s.top().first>=a[i])
        {
        s.pop();
        }
        if(s.size()==0)
        {
        vec.push_back(n);
        }
        else
        {
        vec.push_back(s.top().second);
        }
        }
        s.push({a[i],i});
        }
        reverse(vec.begin(),vec.end());
        return vec;
        }
        
           
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long a[], int n)
    {
        /*
        long long maxA=0;
        for(int i=0;i<n;i++){
            
            long long minHeight=INT_MAX;
            for(int j=i;j<n;j++){
                 minHeight=min(minHeight, a[j]);
                maxA=max(maxA,(j-i+1)*minHeight);
            }
        }
        
        return maxA;
        */
        
      /*  
     long long maxA=INT_MIN;
       
        vector<long long>left =getNSL(a,n);
        vector<long long>right=getNSR(a,n);
        
       for(int i=0;i<n;i++){
           maxA=max(maxA, ((right[i]-left[i]-1)*a[i]));
       }
       
       return maxA;
       */
       
 /*   

vector<long long>vec1(NSL(a,n));
vector<long long>vec2(NSR(a,n));
vector<long long>vec3;
vector<long long>vec4;
for(int i=0;i<vec1.size();i++) 
vec3.push_back(vec2[i]-vec1[i]-1);

for(int i=0;i<vec3.size();i++)
vec4.push_back(vec3[i]*a[i]);

return *max_element(vec4.begin(), vec4.end()) ;

*/


//Best approach

 long long maxA=INT_MIN;
stack<long long>st;

for(int i=0;i<=n;i++){
    
    while(!st.empty() && (i==n || a[st.top()]>=a[i])){
        long long height=a[st.top()];
        st.pop();
        long long width;
        if(st.empty())
        width=i;
        else
        width=i-st.top()-1;
        
        maxA= max(maxA, height*width);
        
    }
    
    st.push(i);
    
}

return maxA;

        
        
        
 }
};
