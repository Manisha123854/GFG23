
https://practice.geeksforgeeks.org/problems/preorder-traversal/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=preorder-traversal


void findPreorder(Node *root,vector<int>&v){
    if(root==NULL)
    return;
    
    v.push_back(root->data);
    findPreorder(root->left,v);
    findPreorder(root->right,v);
    
}

vector <int> preorder(Node* root)
{
      /*vector<int>v;
      
      findPreorder(root,v);
      
      return v;
      */
      
      
      vector<int>v;
      stack<Node*>st;
      st.push(root);
      
      while(!st.empty()){
          Node *temp=st.top();
          st.pop();
          v.push_back(temp->data);
          if(temp->right!=NULL)
          st.push(temp->right);
         if(temp->left!=NULL)
          st.push(temp->left);
      }
      
      return v;
}
