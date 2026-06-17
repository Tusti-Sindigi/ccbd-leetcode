#include <stdio.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};
 
struct ListNode* mergeNodes(struct ListNode* head) 
{
    struct ListNode* p=head->next;
    struct ListNode* n=head;

    int sum=0;

    while(p)
    {
        if(p->val==0)
        {
            n->val=sum;
            n->next=p;
            
            if(p->next==NULL)
            {
                n->next=NULL;
                break;
            }

            n=n->next;
            sum=0;
            
        }
        else
            sum+=p->val;

        p=p->next;
    }
    return head;
}