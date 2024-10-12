
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*>q;
    vector<vector<int>>result;
    if(!root)return result;
    q.push(root);

 while(!q.empty()){
    int size= q.size();
    vector<int>ans;
    for(int i=0;i<size;i++){
        TreeNode* node=q.front();
         q.pop();
        if(node->left)q.push(node->left);
        if(node->right)q.push(node->right);
          ans.push_back(node->val);

    }
    result.push_back(ans);


}
return result;
    
        
    }
};