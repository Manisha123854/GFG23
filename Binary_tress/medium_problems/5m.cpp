


https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=determine-if-two-trees-are-identical

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL || r2==NULL)
        return r1==r2;
        
        
        return (r1->data==r2->data)&&
        isIdentical(r1->left,r2->left)&&isIdentical(r1->right,r2->right);
    }
};