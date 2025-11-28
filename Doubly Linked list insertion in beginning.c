#include<stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head,*newnode,*temp;

    int input=1;
    head=0;
    while(input)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
            head=temp=newnode;
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("If you want to continue, press 1: ");
        scanf("%d",&input);
    }
    printf("Do you want to insert at beginning? 1/0: ");
    scanf("%d",&input);
    if(input==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data to insert at beginning: ");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=head;
        if(head!=0)
            head->prev=newnode;
        head=newnode;
    }
    printf("\nLinked list: ");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


