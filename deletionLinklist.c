#include <stdio.h>
#include <stdlib.h>
//  *create node
struct Node
{
    int data;
    struct Node *next;
};

// *traversal

void linkedListTraversal(struct Node *ptr)
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

// *deleting a node
struct Node *deleteFirstNode(struct Node *head)
{
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        struct Node *ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }
}
struct Node *deleteAtIndex(struct Node *head, int index)
{
     if (head == NULL)
    {
        printf("\nList is empty\n");

    }
    else{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
    }
};

struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
};

struct Node *deleteAtValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    //   else{
    //       printf("Given value doesn't exist");
    //   }
    return head;
};

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

    // *Link second and third node
    second->data = 11;
    second->next = third;

    // *Link third and fourth node
    third->data = 41;
    third->next = fourth;

    // *Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);

    // *for deleting first element of linklist
    // head = deleteFirstNode(head);
    // linkedListTraversal(head);

    // head = deleteAtIndex(head, 2);
    // linkedListTraversal(head);

    // head = deleteAtEnd(head);
    // linkedListTraversal(head);

     head = deleteAtValue(head, 41);
    linkedListTraversal(head);
    return 0;
}
