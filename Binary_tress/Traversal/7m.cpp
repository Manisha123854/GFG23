

https://practice.geeksforgeeks.org/problems/postorder-traversal/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postorder-traversal

void findpostorder(Node * root,vector<int>&v)
{
    
    if(root==NULL)
    return;
    
     findpostorder(root->left,v);
      findpostorder(root->right,v);
      v.push_back(root->data);
    
    
}

vector <int> postOrder(Node* root)
{
 /* vector<int>v;
  findpostorder(root,v);
  return v;
  */
  
  vector<int>v;
  stack<Node*>st1,st2;
  st1.push(root);
  
  
  while(!st1.empty()){
     Node *temp=st1.top();
     st1.pop();
     st2.push(temp);
     if(temp->left)
     st1.push(temp->left);
     if(temp->right)
     st1.push(temp->right);
  }
  
  while(!st2.empty()){
      v.push_back(st2.top()->data);
      st2.pop();
  }
  return v;
}


