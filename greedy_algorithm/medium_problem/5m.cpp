

https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=job-sequencing-problem



/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
   static bool compare(Job a, Job b){
        return a.profit>b.profit;
    }
    
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job a[], int n) 
    { 
        int jobprofit=0;
        int countjobs=0;
         vector<int>v;
         
        sort(a,a+n,compare);
        
        int max_dead= a[0].dead;
        
        for(int i=1;i<n;i++){
            max_dead=max(max_dead,a[i].dead);
        }
      
      int slot[max_dead+1];
      
      for(int i=0;i<=max_dead;i++)
      slot[i]=-1;
      
      for(int i=0;i<n;i++)
      {
          for(int j=a[i].dead;j>0;j--){
              if(slot[j]==-1){
                  slot[j]=i;
                  countjobs++;
                  jobprofit+=a[i].profit;
                  break;
              }
          }
      }
      
      v.push_back(countjobs);
      v.push_back(jobprofit);
      
      return v;
      
    } 
};