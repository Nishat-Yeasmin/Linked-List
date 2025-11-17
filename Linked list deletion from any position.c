#include<stdio.h>

    struct node
    {
        int data;
        struct node *next;
    };
    int main(){
    struct node *head,*newnode,*temp,*nextnode;
    head=0;
    int choice=1;
    int count=0;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof (struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
            count++;
        }
        else{
            temp->next= newnode;
            temp = newnode;
            count++;

        }
        printf("If you want to continue press: ");
        scanf("%d",&choice);
    }
    if(head==0)
    {
        printf(" List is Empty\n");
    }
    else{
        int pos,i=1;

            printf("Enter position you want to delete: ");
        scanf("%d",&pos);
        while(pos<1 || pos>count)
        {
            printf("Enter position you want to delete: ");
            printf("Invalid position\n");
            scanf("%d",&pos);
        }
        if(pos==1)
        {
            temp=head;
            head=head->next;
            free(temp);
        }
        else{
            temp=head;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            nextnode=temp->next;
            temp->next=nextnode->next;
            free(nextnode);
        }
    }
     temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

