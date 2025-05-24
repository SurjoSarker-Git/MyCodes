#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main ()
{
    struct node *head=NULL;
    head=malloc(sizeof(struct node));

    head->data=69;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=78;
    head->link=current;
    current->link=NULL;

    printf("%d %d",head,current);
}
