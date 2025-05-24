#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node *del(struct node *head)
{
    if(head==NULL)
    printf("Linked List is Empty:)");
    else
    {
        struct node *temp=head;
        head=head->link;
        free(temp);
    }
    return head;
}

int main ()
    {
        struct node *head=malloc(sizeof(struct node));
        head->data=45;
        head->link=NULL;

        struct node *current = malloc(sizeof(struct node));
        current->data=98;
        current->link=NULL;
        head->link=current;

        current=malloc(sizeof(struct node));
        current->data= 69;
        current->link=NULL;

        head->link->link=current;

        head=del(head);

        struct node *ptr=head;

        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;

        }
        return 0;
    }