#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow! cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow!\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack* s, int i){
    int arrayInd  = s->top-i+1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else {
        return s->arr[arrayInd];
    }
}
int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("stack created succesfully\n");
    printf("before pushing, full: %d\n", isFull(s));
    printf("before pushing, empty: %d\n", isEmpty(s));
     push(s,10);
     push(s,15);
     push(s,20);
     push(s,40);
     push(s,45);
     push(s,60);
     push(s,65);
     push(s,70);
     push(s,80);
     push(s,85);
    //  push(s,90); //overflow
    printf("after pushing, full: %d\n", isFull(s));
    printf("after pushing, empty: %d\n", isEmpty(s));
    // pop
    printf("popped %d from stack\n",pop(s)); // --> last in first out
    printf("popped %d from stack\n",pop(s)); // --> last in first out
    printf("popped %d from stack\n",pop(s)); // --> last in first out

    //peek operation
    for (int j=1; j<= s->top+1; j++){
        printf("The value at position %d is %d\n", j, peek(s, j));
    }
    return 0;
}
