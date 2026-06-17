#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head) 
{
    if(head==NULL || head->next==NULL)
        return head;

    struct ListNode* prev=head;
    struct ListNode* temp=head->next;
    struct ListNode* prevprev=head;

    head=temp;

    while(prev->next!=NULL)
    {
        prev->next=temp->next;
        temp->next=prev;
        if(head!=temp)
            prevprev->next=temp;

        if(prev->next==NULL)
            break;
        if(head!=temp)
            prevprev=prev;
        prev=prev->next;
        temp=prev->next;
    }
    return head;
}