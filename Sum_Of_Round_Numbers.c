#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print(struct node *head)
{
    head->data=100;
    head->link=NULL;

    struct node *ptr=head;

    struct node *current =malloc(sizeof(struct node));
    current->data=200;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=300;
    current->link=NULL;
    head->link->link=current;

    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}

int main ()
    {
        struct node *head=malloc(sizeof(struct node));
        print(head);
        return 0;
    }