#include <stdio.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};
 
struct ListNode* mergeNodes(struct ListNode* head) 
{
    struct ListNode* p=head;
    struct ListNode* n, *nn;

    int sum=0;

    while(p!=NULL)
    {
        if(sum!=0 && p->val==0)
        {
            struct ListNode* temp=malloc(sizeof(struct ListNode));
            temp->val=sum;
            temp->next=NULL;

            if(n==NULL)
            {
                n=temp;
                nn=n;
            }
            else
            {
                n->next=temp;
                n=n->next;
            }
                
            sum=0;
        }
        else
            sum+=p->val;

        p=p->next;
    }
    return nn;
}