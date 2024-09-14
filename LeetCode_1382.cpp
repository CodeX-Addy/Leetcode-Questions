class Solution {
public:

    TreeNode*build(vector<int>&in, int start, int end){
        if(start > end)
            return nullptr;
        int mid = (start + end) >> 1;
        TreeNode*root = new TreeNode(in[mid]);

        root->left = build(in, start, mid - 1);
        root->right = build(in, mid+1, end);

        return root;
        
    }

    void inorder(TreeNode*root, vector<int>&in){
        if(!root)
            return;
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int>in;
        inorder(root, in);

        return build(in, 0, in.size()-1);
    }
};
