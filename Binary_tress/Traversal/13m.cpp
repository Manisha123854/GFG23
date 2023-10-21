

https://www.codingninjas.com/studio/problems/tree-traversals_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

vector<vector<int>> getTreeTraversal(TreeNode *root){
   vector<int>pre,in,post;
vector<vector<int>>v;
   stack<pair<TreeNode*,int>>st;

   if(root==NULL)
   return v;
   st.push({root,1});

   while(!st.empty()){
       auto it=st.top();
       st.pop();

       if(it.second==1)
       {
           pre.push_back(it.first->data);
           it.second++;
           st.push(it);
           if(it.first->left!=NULL)
           st.push({it.first->left,1});
       }
       else if(it.second==2){
           in.push_back(it.first->data);
           it.second++;
            st.push(it);
           if(it.first->right!=NULL)
           st.push({it.first->right,1});
       }
       else
       post.push_back(it.first->data);

   }
    
    v.push_back(in);
    v.push_back(pre);
    v.push_back(post);
    return v;

}