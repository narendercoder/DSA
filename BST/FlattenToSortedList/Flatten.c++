

/*
 void inorder(TreeNode<int>* root, vector<int> &in){
        if(root == NULL)
        return;

        inorder(root->left, in);
        in.push_back(root->data);
        inorder(root->right, in);
    }
TreeNode<int>* flatten(TreeNode<int>* root)
{
      vector<int> inorderVal;
         inorder(root, inorderVal);
         int n = inorderVal.size();

         TreeNode<int>* newRoot = new TreeNode<int>(inorderVal[0]);
         TreeNode<int>* curr = newRoot;

         for(int i=1; i<n; i++){
             TreeNode<int>* temp = new TreeNode<int>(inorderVal[i]);
             curr->left = NULL;
             curr->right = temp;
             curr = temp;
         }
         curr->left = NULL;
         curr->right =  NULL;
         return newRoot;
}

*/