#include<stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*newnode,*temp;
    int choice=1;
    int count=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
            head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
        count++;
        printf("Press 1 to add more: ");
        scanf("%d",&choice);
    }
    int pos;

    printf("Enter position: ");
    scanf("%d",&pos);
    while(pos<1 || pos>count+1)
    {
        printf("Invalid position\n");
        printf("Enter position: ");
        scanf("%d",&pos);
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data you want to insert: ");
    scanf("%d",&newnode->data);
    if(pos==1)
    {
        newnode->next=temp;
        head=newnode;
    }
    else{
        temp=head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    count++;
    printf("\nLinked list: ");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
