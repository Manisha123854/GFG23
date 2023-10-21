


https://practice.geeksforgeeks.org/problems/number-of-nges-to-the-right/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-nges-to-the-right

class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &a, int queries, vector<int> &indices){
        //write your code here
        
        vector<int>v;
       
      /*
        for(int i=0;i<queries;i++)
        {
            int c=0;
            for(int j=indices[i]+1;j<n;j++){
               
               if(a[j]>a[indices[i]])
               c++;
                
            }
            v.push_back(c);
        }
        
        return v;*/
       
       for(int i=0;i<queries;i++)
        {
            int c=0;
            int ele=a[indices[i]];
            for(int j=indices[i]+1;j<n;j++){
               
               if(a[j]>ele)
               c++;
                
            }
            v.push_back(c);
        }
        
            return v;
    }

};