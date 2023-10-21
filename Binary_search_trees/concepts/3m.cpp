

https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-element-in-bst

int minValue(struct Node *root) {

if(root==NULL)
return -1;
int ans=root->data;
while(root!=NULL)
{
    ans=root->data;
    root=root->left;
}
return ans;
}