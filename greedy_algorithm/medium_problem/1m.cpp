


https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=n-meetings-in-one-room


struct meeting{
    int start;
    int end;
    int pos;
};
class Solution
{
    static bool compare(meeting m1,meeting m2){
        if(m1.end<m2.end)
        return true;
        else if(m1.end>m2.end)
        return false;
        else if(m1.pos<m2.pos)
        return true;
        
        
        return false;
    }
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
      struct meeting meet[n];
      for(int i=0;i<n;i++){
          
          meet[i].start=start[i];
          meet[i].end=end[i];
          meet[i].pos=i+1;
      }
      
       sort(meet,meet+n,compare);
       
      // vector<int>v;
       //v.push_back(meet[0].pos);
       
       int limit=meet[0].end;
      int count=1;
      for(int i=0;i<n;i++){
          
          if(meet[i].start>limit){
              limit=meet[i].end;
              count++;
             // v.push_back(meet[i].pos);
          }
      }
      
      return count;
    }
};