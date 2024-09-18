
class Solution {
public:
int height(TreeNode*root){
    if(!root)return 0;
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int a=diameterOfBinaryTree(root->left);
        int b=diameterOfBinaryTree(root->right);
        int c=(height(root->left)+height(root->right));
        return max({a,b,c});
        
    }
};