/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;

        int l = maxDepth(root->left);
        int r = maxDepth(root->right);

        return 1 + max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int l = diameterOfBinaryTree(root->left);
        int r = diameterOfBinaryTree(root->right);
        int m = maxDepth(root->left) + maxDepth(root->right);
        int d = max(m, max(l,r));
        return d;
    }
};
