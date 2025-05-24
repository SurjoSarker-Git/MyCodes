#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void add_at_pos(struct node *head ,int data,int pos)
{
    struct node *ptr=head;
;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data=data;
    ptr2->link=NULL;

    while(pos!=2)
    {
        ptr=ptr->link;
        pos--;
    }

    ptr2->link=ptr->link;
    ptr->link=ptr2;
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


        add_at_pos(head,500,3);

        struct node *ptr=head;

        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
        return 0;
    }