#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2)
{
    struct ListNode* temp1=list1;
    int c=0;

    while(c+1!=a)
    {
        temp1=temp1->next;
        c++;
    }

    c++;
    struct ListNode* temp=temp1->next;
    temp1->next=list2;

    while(list2->next!=NULL)
        list2=list2->next;

    while(temp->next!=NULL && c!=b+1)
    {
        c++;
        temp=temp->next;
    }

    list2->next=temp;

    return list1;
}