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
        newnode = (struct node *)malloc(sizeof (struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next= newnode;
            temp = newnode;

        }
        printf("If you want to continue press: ");
        scanf("%d",&choice);
    }
    if(head==0)
    {

        printf("List is empty\n");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
     temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


