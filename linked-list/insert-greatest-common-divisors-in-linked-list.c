#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head)
{
    struct ListNode* temp=head;

    while(temp->next!=NULL)
    {
        int a, b;
        if(temp->val>temp->next->val)
        {
            a=temp->val;
            b=temp->next->val;
        }
        else
        {
            a=temp->next->val;
            b=temp->val;
        }

        while(b!=0)
        {
            int t=b;
            b=a%b;
            a=t;
        }

        struct ListNode* new=malloc(sizeof(struct ListNode));
        new->val=a;
        new->next=temp->next;
        temp->next=new;

        temp=temp->next->next;
    }    
    return head;
}