#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 100


struct queue 
{
    int f, r;
    char books[size];
};


struct Stack
{
    int top;
    char books[size];
};


void initqueue(struct queue *queue) 
{
    queue->f=queue->r=-1;
}


int isEmptyqueue(struct queue *queue) 
{
    return queue->f==-1;
}


void enqueue(struct queue *queue, char *book) 
{
    if (queue->r== size-1) 
    {
        printf("Queue is full\n");
        return;
    }
    if (isEmptyqueue(queue)) 
    {
        queue->f=queue->r=0;
    } 
    else 
    {
        queue->r++;
    }
    strcpy(queue->books[queue->r], book);
}


void dequeue(struct queue *queue) 
{
    if (isEmptyqueue(queue)) 
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Process bool: %s\n", queue->books[queue->f]);
    if (queue->f == queue->r) 
    {
        queue->f = queue->r = -1;
    } 
    else 
    {
        queue->f++;
    }
}


void initStack(struct Stack *stack) 
{
    stack->top=-1;
}


int isEmptyStack(struct Stack *stack) 
{
    return stack->top== -1;
}


void push(struct Stack *stack, char *book) 
{
    if (stack->top== size-1) 
    {
        printf("Stack is full\n");
        return;
    }
    stack->top++;
    strcpy(stack->books[stack->top], book);
}


void pop(struct Stack *stack) 
{
    if (isEmptyStack(stack)) 
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Undo return : %s\n", stack->books[stack->top]);
    stack->top--;
}

int main() 
{
    struct queue reqQueue;
    struct Stack returnStack;

    initqueue(&reqQueue);
    initStack(&returnStack);

    
    enqueue(&reqQueue, "Book A");
    enqueue(&reqQueue, "Book B");
    enqueue(&reqQueue, "Book C");

    
    dequeue(&reqQueue);
    dequeue(&reqQueue);

    
    push(&returnStack, "Book A");
    push(&returnStack, "Book B");

    
    pop(&returnStack);

    return 0;
}