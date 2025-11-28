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
    int pos;
    int count=1;
    printf("\nEnter the position to insert new node: ");
    scanf("%d",&pos);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d",&newnode->data);
    if(pos==1)
    {

        newnode->prev=0;
        newnode->next=head;

        if(head!=0)
            head->prev=newnode;
        head=newnode;
    }
        else
        {
            temp=head;
            while(count<pos-1 && temp->next!=0)
            {
                temp=temp->next;
                count++;
            }
            newnode->next=temp->next;
            newnode->prev=temp;
            if(temp->next!=0)
                temp->next->prev=newnode;
            temp->next=newnode;
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
