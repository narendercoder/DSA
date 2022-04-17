#include <stdio.h>
#include <stdlib.h>
//  *create node
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// *traversal

void TraversalForward(struct Node *ptr)
{
    
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {    
        printf("NULL\n");
    }
}

void Traversalbackward(struct Node *head)
{
    struct Node *p = head;
    if(head==NULL){
        printf("\nempty\n");
    }
    while (p->next != NULL)
    {
        p = p->next;
    }
    while(p != NULL)
    {
        printf("%d->", p->data);
        p = p->prev;
    }
    if (p == NULL)
    {    
        printf("NULL\n");
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //  *Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // *Link first and second node
    head->data = 7;
    head->next = second;
    head->prev = NULL;

    // *Link second and third node
    second->data = 11;
    second->next = third;
    second->prev = head;

    // *Link third and fourth node
    third->data = 41;
    third->next = fourth;
    third->prev = second;

    // *Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    fourth->prev = third;
    
    TraversalForward(head);
    Traversalbackward(head);

    
    return 0;
}