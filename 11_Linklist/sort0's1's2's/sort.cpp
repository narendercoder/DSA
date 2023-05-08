#include <bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


class Solution
{
    public:
    
    void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
    Node *zeroHead = new Node(-1);
    Node *zeroTail  = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail  = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail  =twoHead;
    
    Node* curr = head;
    
    //create separate list
    while(curr != NULL){
        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        }
        else{
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    //merge 3 sublist
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead->next;
    }
    else{
        zeroTail -> next = twoHead->next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
    //setup head
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
        
    }
};

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}