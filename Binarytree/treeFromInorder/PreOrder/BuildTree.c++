/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

// int findPosition(vector<int> inorder, int element, int n){
//     for(int i=0; i<n; i++){
//         if(inorder[i] == element)
//         return i;
//     }
//     return -1;
// }

void createMapping(vector<int> inorder, map<int, int> &nodeToIndex, int n){
    for(int i=0; i<n; i++){
        nodeToIndex[inorder[i]] = i;
    }
}

TreeNode<int> *solve(vector<int> inorder, vector<int> preorder, int &index, int inorderStart, int inorderEnd, int n, map<int, int>&nodeToIndex){
    if(index >=n || inorderStart > inorderEnd){
        return NULL;
    }
    int element = preorder[index++];
    TreeNode<int> * root = new TreeNode<int>(element);
    int position = nodeToIndex[element];
    // int position = findPosition(inorder, element, n);

    root->left = solve(inorder, preorder, index, inorderStart, position-1, n, nodeToIndex);
    root->right = solve(inorder, preorder, index, position+1, inorderEnd, n, nodeToIndex );
    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    int n = inorder.size();
    int preOrderIndex = 0;
    map<int, int> nodeToIndex;
    createMapping(inorder, nodeToIndex, n);
    TreeNode<int>* ans = solve(inorder, preorder,preOrderIndex, 0, n-1, n, nodeToIndex);
    return ans;
}