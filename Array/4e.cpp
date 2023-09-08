
https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicate-elements-from-sorted-array

// own


class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        

        //BF

        /*vector<int>v;
        for(int i=0;i<n-1;i++){                      //------------> Tc=O(n)   , Sc=O(n)
            
            if(a[i]!=a[i+1]){
               v.push_back(a[i]);
            }
            else
            continue;
            
        }
        
        v.push_back(a[n-1]);
        for(int i=0;i<v.size();i++)
        a[i]=v[i];
        return v.size();
        */
        
    
        
     /*set<int>st;
        for(int i=0;i<n;i++){                          ------------------>  Tc= O(nlogn)+o(n), sc=O(n)
            st.insert(a[i]);
        }
         int x=st.size();
        
        int j=0;
        for(auto i:st){
            a[j++]=i;
        }
        
        return x;*/


//Best
        
        int i=0;                             // -------------------> Tc= O(n)  ,Sc=O(1)
       for(int j=0;j<n-1;j++) {
           if(a[j]!=a[j+1]){
               a[i++]=a[j];
           }
       }
       
       a[i]=a[n-1];
        
        return i+1;
    }
};