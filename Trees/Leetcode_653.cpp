
class Solution {
public:

    void Inorder(TreeNode* root, vector<int>&inorder){
        if(root == NULL){
            return;
        }

        Inorder(root->left, inorder);
        inorder.push_back(root->val);
        Inorder(root->right, inorder);

    }

    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        Inorder(root, inorder);
        int s = 0, e = inorder.size()-1;

        while(s < e){
            int sum = inorder[s] + inorder[e];
            if(sum == k)
                return 1;
            else if(sum < k){
                ++s;
            }
            else
                --e;
        }
        return 0;
    }
};
