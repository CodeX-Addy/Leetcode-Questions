
class Solution {
public:

    void Inorder(TreeNode* root, vector<int>&inorder){
        if(!root)
            return;
        Inorder(root->left, inorder);
        inorder.push_back(root->val);
        Inorder(root->right, inorder);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> inorder;
        Inorder(root, inorder);

        // Check if the inorder traversal is sorted
        for (int i = 1; i < inorder.size(); i++) {
            if (inorder[i - 1] >= inorder[i]) {
                return false;
            }
        }
        return true;
    }
};
