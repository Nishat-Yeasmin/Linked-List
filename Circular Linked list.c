#include<stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*newnode,*temp;
    int input=1;
    while(input)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next =0;
        if(head==0)
            head=temp=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
        printf("0/1?: ");
        scanf("%d",&input);
    }
    temp=head;
    printf("\nCircular Linked list: ");
    if(head!=0)
    {
        do
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        while(temp!=head);
        printf("\n");
    }
}
