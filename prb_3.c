#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Customer 
{
    int ID;
    char name[50];
    struct Customer *next;
};


struct Customer* data1(int id, const char* name) 
{
    struct Customer* node1 =(struct Customer*)malloc(sizeof(struct Customer));
    node1->ID= id;
    strcpy(node1->name, name);
    node1->next = NULL;
    return node1;
}


struct Customer *add(struct Customer * head, int id, const char* name) 
{
    struct Customer* node1= data1(id, name);
    if (head == NULL) 
    {
        head = node1;
    } 
    else 
    {
        struct Customer *current = head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next= node1; 
    }

    return head;
}


void search(struct Customer* head, int id) 
{
    struct Customer* current = head;
    while (current != NULL) 
    {
        if (current->ID==id) 
        {
            printf("Customer Found:\n");
            printf("ID: %d\n", current->ID);
            printf("Customer Name: %s\n", current->name);
            return;
        }
        current = current->next;
    }
    printf("Customer not found.\n");
}

int main() 
{
    struct Customer* head = NULL;

    
    head=add(head, 831011, "Surjo");
    head=add(head, 831004, "Arko");
    head=add(head, 831046, "Ishrak");

    
    int searchId = 831011;
    search(head, searchId);

    return 0;
}