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
    if(ptr == NULL){
        printf("NULL\n");
    }
}

//  *Case 1: insertion at beginning

 struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->next = head;
    newNode->data = data;
    return newNode;
 }

 //  *Case 2: insertion in between
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i =0;
    while(i != index-1){
       p = p->next;
       i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
 }

 // *Case 3: insertion at end
 struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    struct Node *temp = head;
    while(temp->next != NULL){
       temp = temp->next;
    }
    temp->next = newNode;
    return head;
 }
 
// *Case 4: insertion after a Node
 struct Node * insertAtNode(struct Node *head,struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

     ptr->next = prevNode->next;
     prevNode->next = ptr;

    return head;
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
 
    // *Link second and third node
    second->data = 11;
    second->next = third;
 
    // *Link third and fourth node
    third->data = 41;
    third->next = fourth;
 
    // *Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
 
    // linkedListTraversal(head);

//    head = insertAtFirst(head, 56);
//    linkedListTraversal(head);

   //head = insertAtIndex(head, 56, 2);
   //linkedListTraversal(head);

    head = insertAtEnd(head,78);
    linkedListTraversal(head);

    // head=insertAtNode(head,second,45);
    // linkedListTraversal(head);

    return 0;
}
