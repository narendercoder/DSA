/*

//Approach #1 -T.C O(M+N) S.C(M+N)
    //step-1 store inorder of both BST
    //step-2  Merged two sorted arrays
    //step-3 inorder to BST

void inorder(TreeNode<int> *root, vector<int> &in){
    if(root == NULL)
        return;
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
vector<int> mergeArrays(vector<int> &a, vector<int> &b){
    vector<int> ans(a.size() + b.size());
    int i=0,j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i] < b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++] = a[i];
            i++;
    }
    while(j<b.size()){
        ans[k++] = b[j];
            j++;
    }
    return ans;
}
TreeNode<int> * inorderToBST(int s, int e, vector<int> &in){
    if(s>e)
     return NULL;
    int mid = (s+e)/2;
    TreeNode<int> *root = new TreeNode<int>(in[mid]);
    root->left = inorderToBST(s,mid-1,in);
    root->right = inorderToBST(mid+1,e,in);
    return root;
}


TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
   vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);
    
    vector<int> mergeArray = mergeArrays(bst1, bst2);
    
    int s=0, e=mergeArray.size()-1;
    return inorderToBST(s,e,mergeArray);
    
}
*/

//Approach #2 - T.C O(M+N) S.C(!)
//step-1 convert both BST into sorted Linked List
//step-2 Merge two sorted Linklist
//step-3 Sorted Linklist to BST

#include <bits/stdc++.h> 
    
    // Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };


//BST to sorted LL
void convertIntoSortedLL(TreeNode<int>*root, TreeNode<int>* &head){
    // base case
    if(root = NULL){
        return;
    }
    convertIntoSortedLL(root->right, head);

    root->right = head;
    if(head != NULL)
    head->left = root;

    head = root;
    convertIntoSortedLL(root->left, head);
}

//Merged LL
TreeNode<int>* mergeLL(TreeNode<int>* head1, TreeNode<int>* head2){
  TreeNode<int>* head = NULL;
  TreeNode<int>* tail = NULL;

  while(head != NULL && head2 != NULL){
      if(head->data < head->data){
          if(head == NULL){
              head = head1;
              tail = head1;
              head1 = head1->right;
          }
          else{
              tail->right = head1;
              head1->left = tail;
              tail = head1;
              head1 = head1->right;
          }
      }
      else{
           if(head == NULL){
              head = head2;
              tail = head2;
              head2 = head2->right;
          }
          else{
              tail->right = head2;
              head->left = tail;
              tail = head2;
              head2 = head2->right;
          }
      }
  }

  while(head1 != NULL){
      tail->right = head1;
              head1->left = tail;
              tail = head1;
              head1 = head1->right;
  }
  while(head2 != NULL){
      tail->right = head2;
              head->left = tail;
              tail = head2;
              head2 = head2->right;
  }
  return head;
}

//sorted LL to BST
int countNodes(TreeNode<int> *head){
    int cnt = 0;
    TreeNode<int>* temp = head;
    while(temp != NULL){
        cnt++
        temp = temp-> right;

    }
    return cnt;
}

TreeNode<int>* sortedLLToBST(TreeNode<int>* &head, int n){
    if(n <=0 || head == NULL){
        return NULL;
    }
    TreeNode<int>* left = sortedLLToBST(head, n/2);
    TreeNode<int>* root = head;
    root->left = left;

    head = head->next;
    root->right = sortedLLToBST(heade, n-n/2-1);
    return root;
}




TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){

    //step1: Convert BST to sorted LL
    TreeNode<int>* head1 = NULL;
    convertIntoSortedLL(root1, head1)
    head1->left = NULL;

    TreeNode<int>*head2 = NULL;
    convertIntoSortedLL(root2, head2);
    head2->left = NULL;

    //Step2: merged sorted LL
    TreeNode<int>* head = mergeLL(head1, head2);

    //step3: convert sorted LL toBST
    return sortedLLToBST(head, countNodes(head));

    
}

*/