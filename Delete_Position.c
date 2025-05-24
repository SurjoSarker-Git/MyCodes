#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void del_pos(struct node **head,int position)
{
    struct node *current=*head;
    struct node *previous=*head;

    if(*head==NULL)
    {
        printf("List is empty!");
    }

    else if(position==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }

    else
    {
        while(position!=1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
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
        struct node *ptr=head;
        del_pos(&head,2);
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }


        return 0;
    }