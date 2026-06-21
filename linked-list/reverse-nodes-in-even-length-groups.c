#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* reverseEvenLengthGroups(struct ListNode* head) 
{
    int c=2;

    if(head->next==NULL)
        return head;

    struct ListNode* temp1=head->next;
    struct ListNode* temp2;

    while(temp1!=NULL)
    {
        int count=0;
        temp2=temp1;

        int a[c];

        while(temp1!=NULL && count<c)
        {
            a[count]=temp1->val;
            count++;
            temp1=temp1->next;
        }
        
        if(count%2==0)
        {
            while(count>0)
            {
                temp2->val=a[count-1];
                count--;
                temp2=temp2->next;
            }    
        }
        
        c++;
    }
    return head;
}