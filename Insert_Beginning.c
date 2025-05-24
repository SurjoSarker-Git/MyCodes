#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node *add_beg(struct node *head,int data)
{
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;
    return head;
}

int main ()
    {
        struct node *head=malloc(sizeof(struct node));
        head->data=100;
        head->link=NULL;

        struct node *current= malloc(sizeof(struct node));
        current->data=200;
        current->link=NULL;

        head->link=current;

        int data=300;
        head=add_beg(head,data);

        struct node *ptr=malloc(sizeof(struct node));
        ptr=head;

        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }

        return 0;
    }