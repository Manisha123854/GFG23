class Solution {
public:
    int majorityElement(vector<int>&a) {
        
        int n= a.size();
        /*unordered_map<int,int>mp;
         for(int i=0;i<n;i++){
            mp[a[i]]++;


            if(mp[a[i]]>n/2)
            return a[i];
        }

         return -1;*/


    int ele;
    int c=0;
    for(int i=0;i<n;i++){
     if(c==0) {
      ele= a[i];
        c=1;
     }
     else if(a[i]==ele)
     c++;
     else
     c--;
    }

    int c1=0;
    for(int i=0;i<n;i++){
        if(a[i]==ele)
        c1++;
    }
    if(c1>n/2)
    return ele;

    return -1;

    }
};