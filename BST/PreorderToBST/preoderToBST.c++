
//1 By comparison - O(N^2)

//2 sorted preorder = inorder, create tree from inorder and preorder 

//3 Range based approach
/*
BinaryTreeNode<int>* solve(vector<int> &preorder, int mini, int maxi, int&i ){
    if(i>=preorder.size())
    return NULL;

    if(preorder[i]< mini || preorder[i] > maxi)
    return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);
    root->left = solve(preorder, mini, root->data, i);
    root->right = solve(preorder, root->data, maxi, i);
    return root;
}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    //sort preorder == inorder (NLogN)
    
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return solve(preorder, mini,maxi, i);

}

*/