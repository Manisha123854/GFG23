

https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=top-view-of-binary-tree

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>v;
        
        if(root==NULL)
        return v;
       map<int,int>mp;
       queue<pair<Node*,int>>q;
       
       q.push({root,0});
       while(!q.empty()){
           
           auto it=q.front();
           q.pop();
           
           Node *node=it.first;
           int line=it.second;
           
           if(mp.find(line)==mp.end())
           mp[line]=node->data;
           
           if(node->left!=NULL)
           q.push({node->left,line-1});
           
           if(node->right!=NULL)
           q.push({node->right,line+1});
           
           
       }
       
       
       for(auto it:mp){
           v.push_back(it.second);
       }
       
       return v;
    }

};

