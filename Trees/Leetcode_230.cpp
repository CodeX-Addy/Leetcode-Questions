
class Solution {
public:

    void Inorder(TreeNode* root, vector<int>&inorder){
        if(!root)
            return;
        Inorder(root->left, inorder);
        inorder.push_back(root->val);
        Inorder(root->right, inorder);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        Inorder(root, ans);
        return ans[k-1];
    }
};
