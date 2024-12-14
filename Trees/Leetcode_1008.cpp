
class Solution {
public:

    TreeNode*build(vector<int>& preorder, int min, int max, int &i){
        if(i >= preorder.size())
            return nullptr;
        
        TreeNode*root=nullptr;
        if(preorder[i] >= min && preorder[i]<=max){
            root = new TreeNode(preorder[i++]);
            root->left = build(preorder, min, root->val, i);
            root->right = build(preorder, root->val,max, i);
        }
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int min = INT_MIN;
        int max = INT_MAX;

        int i=0;
        return build(preorder, min, max, i);
    }
};
