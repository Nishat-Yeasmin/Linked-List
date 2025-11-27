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
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter the data you want to insert: ");
        scanf("%d",&newnode->data);
       newnode->next=head;
       head=newnode;

        printf("If you want to continue,press 1: ");
        scanf("%d",&choice);
    }

    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

