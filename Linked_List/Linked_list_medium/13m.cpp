

https://leetcode.com/problems/intersection-of-two-linked-lists/description/


class Solution {
    int getdiff(ListNode* temp1,ListNode*temp2){
        int l1=0,l2=0;
        while(temp1!=NULL || temp2!=NULL){

            if(temp1!=NULL){
            l1++;
         temp1=temp1->next;
            }

        if(temp2!=NULL){
            l2++;
            temp2=temp2->next;
        }
}

        return l1-l2;
    }
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
       /* 
        while(head2!=NULL){
           ListNode * temp=head1;

            while(temp!=NULL){
                if(temp==head2)
                return temp;
              temp=temp->next;
            }
            head2=head2->next;
        }

        return NULL;
        */

/*
unordered_set<ListNode*>st;
ListNode *temp1=head1;
ListNode *temp2=head2;

while(temp1!=NULL)
{
    st.insert(temp1);
    temp1=temp1->next;
}

while(temp2!=NULL){
    if(st.find(temp2)!=st.end())
    return temp2;
    temp2=temp2->next;
}

return NULL;
*/

/*
if(head1==NULL || head2==NULL)
return NULL;

int diff=getdiff(head1,head2);
if(diff<0){
 while(diff++!=0)
    head2=head2->next;

}
else{
    while(diff--!=0)
    head1=head1->next;
}

while(head1!=NULL){

    if(head1==head2)
    return head1;

    head1=head1->next;
    head2=head2->next;
}

return NULL;
*/

ListNode *d1=head1;
ListNode*d2=head2;

while(d1!=d2){
    d1=d1==NULL?head2:d1->next;
    d2=d2==NULL?head1:d2->next;
}

return d1;


    }
};