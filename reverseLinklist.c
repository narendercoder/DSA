#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    if(ptr == NULL){
        printf("NULL");
    }
}

// *Iterative Method:

// struct Node* reverse(struct Node *head){
// if(head == NULL || head->next == NULL){
//     return head;
 // }
//     struct Node *prev = NULL;
//     struct Node *current = head;
//     struct Node *next = NULL;
//     while(current != NULL){
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     return prev;
// }
 
//  *Recursive Method:

struct Node* reverse(struct Node *head){
    if(head==NULL || head->next == NULL)
    return head;
    
    struct Node* newHead = reverse(head->next);

    struct Node* headNext = head->next;
    headNext->next = head;
    head->next =NULL;
    return newHead;
}


int  getLength(struct Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

struct Node* findMiddle(struct Node* head){
    int len = getLength(head);
    int ans=(len/2);
    struct Node* temp = head;
    int cnt =0;
    while(cnt < ans){
         temp = temp->next;
         cnt++;
    }
    return temp;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Before reverse\n");
    linkedListTraversal(head);

    // printf("\nIterative Method: After reverse\n");
    // head = reverse(head);
    // linkedListTraversal(head);

    printf("\nRecursive Method: After reverse\n");
    head = reverse(head);
    linkedListTraversal(head);

    printf("\nMiddle of linklist is %d\n",findMiddle);

    return 0;
}
