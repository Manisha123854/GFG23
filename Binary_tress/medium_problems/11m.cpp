
https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=left-view-of-binary-tree

void  findLeftView(Node*root,int level,vector<int>&v){
    if(root==NULL)
    return;
    
    if(level==v.size())
    v.push_back(root->data);
    
   findLeftView(root->left,level+1,v);
    findLeftView(root->right,level+1,v);
    
}

vector<int> leftView(Node *root)
{
    vector<int>v;
    
    if(root==NULL)
    return v;
    
    findLeftView(root,0,v);
    return v;
  
 }


 //Right view 


 void  findRightView(Node*root,int level,vector<int>&v){
    if(root==NULL)
    return;
    
    if(level==v.size())
    v.push_back(root->data);
    
   findRightView(root->right,level+1,v);
    findRightView(root->left,level+1,v);
    
}

vector<int> rightView(Node *root)
{
    vector<int>v;
    
    if(root==NULL)
    return v;
    
    findRightView(root,0,v);
    return v;
  
 }