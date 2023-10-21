
https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=boundary-traversal-of-binary-tree

class Solution {
    
    bool isLeaf(Node*root){
        return !root->left && !root->right;
    }
    
    void addLeftBoundary(Node *root,vector<int>&v){
        
        Node *curr= root->left;
        while(curr){
            
            if(!isLeaf(curr))
            v.push_back(curr->data);
            
            if(curr->left)
            curr=curr->left;
            else
            curr=curr->right;
        }
    }
    
    void addLeafNode(Node *root,vector<int>&v){
        if(isLeaf(root))
        {
        v.push_back(root->data);
        return;
        }
        if(root->left)
        addLeafNode(root->left,v);
        if(root->right)
        addLeafNode(root->right,v);
    }
    
    void addRightBoundary(Node *root,vector<int>&v) {
        
        vector<int>temp;
        
      Node *curr=root->right;
      
      while(curr){
          
          if(!isLeaf(curr))
          temp.push_back(curr->data);
          
          if(curr->right)
          curr=curr->right;
          else
          curr=curr->left;
          
    }
    
    for(int i=temp.size()-1;i>=0;i--)
    v.push_back(temp[i]);
        
    }
    
public:
    vector <int> boundary(Node *root)
    {
      vector<int>v;
      
      if(root==NULL)
      return v;
      
      if(!isLeaf(root))
      v.push_back(root->data);
      
      addLeftBoundary(root,v);
      addLeafNode(root,v);
      addRightBoundary(root,v);
      return v;
        
        
    }
};