#include <stdio.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};


int getDecimalValue(struct ListNode* head) 
{
    struct ListNode* p=head;
    int sum=0;

    if(head->next==NULL)
        return head->val;

    while(p!=NULL)
    {
        sum=2*sum+p->val;
        p=p->next;
    }
    
    return sum;
}