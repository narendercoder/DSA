
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



class Solution{
     Node* getMid(Node *head){
        Node *slow = head;
        Node *fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
   
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head == NULL && head-> next == NULL){
            return true;
        }
        
        Node* middle = getMid(head);
        
        Node* temp = middle->next;
        
        middle->next = reverse(temp);
        
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while(head2 != NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
    }
};

int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

// method 2

// class Solution {
//     private:
//     bool checkPalindrome(vector<int> arr){
//         int n = arr.size();
//         int s=0;
//         int e = n-1;
//         while(s<=e){
//             if(arr[s] != arr[e]){
//                 return 0;
//             }
//             s++;
//             e--;
//         }
//         return 1;
//     }
// public:
//     bool isPalindrome(ListNode* head) {
//       //create array
//         vector<int> arr;
//         ListNode* temp = head;
      
//       //push linkedlist data to array
//         while(temp != NULL){
//             arr.push_back(temp->val);
//             temp = temp->next;
//         }
//         return checkPalindrome(arr);
//     }
// };