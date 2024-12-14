
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //formality
        if(root == NULL)
            return NULL;

        if(p->val < root->val && q->val < root->val){
            TreeNode*left = lowestCommonAncestor(root->left, p, q);
            return left;
        }
        if(p->val > root->val && q->val > root->val){
            TreeNode*right = lowestCommonAncestor(root->right, p, q);
            return right;
        }

        return root;
    }
};
