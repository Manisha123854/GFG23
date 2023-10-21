

https://practice.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-pairs-with-given-sum-in-doubly-linked-list

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        
       /* vector<int>v;
        vector<pair<int,int>>ans;
         
      Node * temp= head;
      
      while(temp!=NULL){
          v.push_back(temp->data);
          temp=temp->next;
      }
      
      int i=0,j=v.size()-1;
      
      while(i<j){
          
          int sum=v[i]+v[j];
          
          if(sum==target){
              
              ans.push_back({v[i],v[j]});
              i++;
              j--;
              
          }
          
          else if(sum<target)
          i++;
          else
          j--;
          
      }
      return ans;
        */
        
       Node *p1=head;
       Node* p2=head;
      
       vector<pair<int,int>>v;
      
      while(p2->next)  {
          p2=p2->next;
      }
      
      while(p1!=p2 && p2->next!=p1){
          
         int sum=p1->data+p2->data;
          
          if(sum==target){
             v.push_back({p1->data,p2->data});
             
             p1=p1->next;
             p2=p2->prev;
          }
          
          else if(sum<target)
          p1=p1->next;
          else
          p2=p2->prev;
      }
        
          return v;
        
        }
};