


https://practice.geeksforgeeks.org/problems/floor-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-bst

class Solution{

public:
    int floor(Node* root, int x) {
      
      int flor=-1;
      
      while(root!=NULL){
          
          if(root->data==x)
          {
          flor=root->data;
          return flor;
          }
          
          
          if(root->data>x){
             root=root->left; 
          }
          else{
              flor=root->data;
              root=root->right;
          }
      }
      
      return flor;
    }
};
