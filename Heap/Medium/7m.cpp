
https://practice.geeksforgeeks.org/problems/hands-of-straights/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=hands-of-straights



//c++


class Solution {
  public:
    bool isStraightHand(int n, int w, vector<int> &a) {             //Tc=O(nlogn ),sc=O(n)
       
       if(n%w!=0)
       return false;
       map<int ,int>mp;
       
       for(int i=0;i<n;i++)
       mp[a[i]]++;
      
      for(auto it:mp)
       {
           if(mp[it.first]>0){
               for(int i=1;i<w;i++){
                   mp[it.first+i]-=mp[it.first];
                   if(mp[it.first+i]<0)
                   return false;
               }
           }
       }
       return true;
       
       
        }   

};



//java

class Solution {
    static boolean isStraightHand(int n, int w, int a[]) {
        
        
         if(n%w!=0)
       return false;
       
       PriorityQueue<Integer>pq=new PriorityQueue<>();
       
       for(int it :a)
       pq.add(it);
       
       while(!pq.isEmpty())
       {
           int smallest=pq.poll();
         
            for(int i=1;i<w;i++){
               if(pq.remove(smallest+i))
               continue;
               else
               return false;
           }
           
       }
       
       return true;
       
    }
    
};
