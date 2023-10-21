
https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/



class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {

         vector<vector<int>>ans;
         if(root==NULL)
         return ans;

         map<int,map<int,multiset<int>>>mp;
         queue<pair<TreeNode*,pair<int,int>>>q;

         q.push({root,{0,0}});

         while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            TreeNode *node=p.first;
            int x=p.second.first;
            int y=p.second.second;

            mp[x][y].insert(node->val);
            if(node->left!=NULL)
            q.push({node->left,{x-1,y+1}});

            if(node->right!=NULL)
            q.push({node->right,{x+1,y+1}});
        }
        
        for(auto p:mp){
            vector<int>v;
            for(auto q:p.second){
                v.insert(v.end(),q.second.begin(),q.second.end());
            }

            ans.push_back(v);
        }

        return ans;
    }
};