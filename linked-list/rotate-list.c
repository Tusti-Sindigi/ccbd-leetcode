#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL||head->next==NULL)
        return head;
    else
    {
        int count=1;

        struct ListNode *tmp=head;
        while(tmp->next!=NULL)
        {    
            tmp=tmp->next;
            count++;
        }

        int rem=k%count;

        for(int i=1;i<=rem;i++)
        {
            struct ListNode *temp=head;
            while(temp->next->next!=NULL)
                temp=temp->next;
            
            temp->next->next=head;
            head=temp->next;
            temp->next=NULL;
        }
    }
    return head;
}