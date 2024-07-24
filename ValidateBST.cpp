class Solution {
public:
    bool isValid(TreeNode* root, long mini,long maxi){
        if(root==NULL){
            return true;
        }
        if(root->val>=maxi || root->val<=mini){
            return false;
        }
        return isValid(root->left,mini,root->val) 
            && isValid(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN,LONG_MAX);
    }
};