#include<stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int choice=1;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0)
            head=temp=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("If you want to continue, press 1: ");
        scanf("%d",&choice);
    }
        printf("\nOriginal List: ");
        temp=head;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");

        struct node *prev=0;
        struct node *current = head;
        struct node *next;

        while(current!=0)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;

        printf("\nReversed List: ");
        temp=head;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");

}
