
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)return NULL;
        TreeNode*curr=root;
        while(curr!=NULL and curr->val!=val){
            if(curr->val>=val){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
            
        }
        return curr;
        
    }
};