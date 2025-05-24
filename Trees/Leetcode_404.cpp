class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root)
            return 0;

        int sum = 0;

        // Check if left child is a leaf
        if (root->left && !root->left->left && !root->left->right) {
            sum += root->left->val;
        }
      
        // Recur for both left and right subtrees
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);
      
        return sum;
    }
};
