
https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implementing-ceil-in-bst


int findCeil(Node* root, int x) {
   
  int ceil=-1;
   
   while(root!=NULL){
       
       if(root->data==x){
           ceil=root->data;
           return ceil;
       }
       if(root->data<x)
       root=root->right;
       else{
           ceil=root->data;
           root=root->left;
       }
   }
   
   return ceil;
}