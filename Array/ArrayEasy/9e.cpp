

https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays

// refer to soln

class Solution{
    public:
    vector<int> findUnion(int a1[], int a2[], int n, int m)
    {
        //BF
        
        
       /* map<int ,int>mp; --->it is not submitted in gfg -->time limit exceed
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            mp[a1[i]]++;                           ------------->Tc=O((m+n)log(m+n))  ,Sc= O(m+n)
            
        }
        
        for(int i=0;i<m;i++){
            mp[a2[i]]++;
        }
        
        for(auto i:mp){
            v.push_back(i.first);
        }
        
        return v;*/
        
        
        
        /*
         set<int>st;---------------------> it is  submiited no time limit exceed
        vector<int>v;
        for(int i=0;i<n;i++){
           st.insert(a1[i]);
        }
        for(int j=0;j<m;j++){                      //-------------> Tc=O((m+n)log(m+n))  ,Sc= O(m+n)
            st.insert(a2[j]);
        }
        for(auto i:st)
        v.push_back(i);
        
        return v;
        */
        
        
     //Best 
     
        vector<int>v;
        int i=0;
        int j=0;
                                                    //------------> Tc= O(m+n) ,Sc=O(m+n)
        while(i<n && j<m){
            
            if(a1[i]<=a2[j]){
                
               if(v.size()==0 || v.back()!=a1[i])
                v.push_back(a1[i]);
                
               i++; 
            }
            else {
                
                if(v.size()==0 || v.back()!=a2[j])
                v.push_back(a2[j]);
                
                j++;
            }
        }
        
        while(i<n){
            
            if(v.back()!=a1[i])
            v.push_back(a1[i]);
            
            i++;
        }
        
         while(j<m){
             
            if(v.back()!=a2[j])
            v.push_back(a2[j]);
            
            j++;
        }
        
        
        return v;
        
        
    }
};