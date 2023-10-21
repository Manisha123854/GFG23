
https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1

class Solution
{
    Node * findpre(Node*root,int key){
        Node *pre=NULL;
        
       while(root!=NULL){
           if(root->key>=key)
           root=root->left;
           else
           {
               pre=root;
               root=root->right;
           }
       }
       
       return pre;
    }
    Node* findsucc(Node * root,int key){
        
        Node *succ=NULL;
        
      
        
        while(root!=NULL){
            if(root->key<=key)
            root=root->right;
            else{
                succ=root;
                root=root->left;
            }
        }
        
        return succ;
    }
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
      suc= findsucc(root,key);
      pre=findpre(root,key);
    }
};
