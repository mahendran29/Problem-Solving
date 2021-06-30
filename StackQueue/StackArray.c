#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int capacity;
    int top;
    int *array;
};

struct Node *stack=NULL;
struct Node* Capacity(int cap)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node*));
    node->capacity=cap;
    node->top=-1;

    node->array=(int*)malloc(cap*sizeof(int*));
    return node;
}

int isFull()
{
    return stack->top==stack->capacity-1;
}

int isEmpty()
{
    return stack->top==-1;
}

int peek()
{
    if(isEmpty())
    {
        return 0;
    }
    return stack->array[stack->top];
}

void push(int item)
{
    if(isFull())
    {
        printf("STACK FULL");
        return;
    }
    stack->array[++stack->top]=item;
    printf("%d pushed to the stack\n",item);
}

int pop()
{
    if(isEmpty())
    {
      return -1;
    }

    return stack->array[stack->top--];
}

void main()
{
    stack=Capacity(5);
    push(10);
     push(20);
      push(30);
      push(10);
     push(20);
      push(30);

      printf("Popped:%d",pop());
      printf("Top most element is:%d",peek());
}