#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;

};

void add_at_end (struct node *head,int data)
{
    struct node *ptr, *temp;
    ptr=head;

    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    while(ptr->link!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
        
    }

    ptr->link=temp;

}

int main ()
    {
        struct node *head=malloc(sizeof(struct node));
        head->data=100;
        head->link=NULL;

        struct node *current=malloc(sizeof(struct node));
        current->data=200;
        current->link=NULL;

        add_at_end(head,300);
        return 0;
    }