#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* doubleIt(struct ListNode* head) 
{
    struct ListNode* temp=head;

    temp->val*=2;
    if(temp->next!=NULL && temp->next->val>=5)
    {
        temp->next->val-=5;
        temp->val+=1;
    }

    if(temp->val>9)
    {
        struct ListNode* new=malloc(sizeof(struct ListNode));
        new->val=1;
        temp->val-=10;
        new->next=temp;
        head=new;
    }

    if(temp->next==NULL)
        return head;

    temp=temp->next;

    while(temp->next!=NULL)
    {
        temp->val*=2;
        if(temp->next->val>=5)
        {
            temp->next->val-=5;
            temp->val+=1;
        }
        temp=temp->next;
    } 

    temp->val*=2;

    return head;
}