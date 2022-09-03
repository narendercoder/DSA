// TreeNode* invertTree(TreeNode* root) {
//         if(!root) return root;
//         TreeNode* nleft = root->left;
//         TreeNode* nright = root->right;
//         root->left=nright;
//         root->right=nleft;
//         invertTree(root->left);
//         invertTree(root->right);
//         return root;
//     }