
class Solution {
public:

    void rightView(TreeNode* root, int level, vector<int>&ans){
        if(!root)
            return;

        if(level == ans.size())
            ans.push_back(root->val);

        rightView(root->right, level+1, ans);
        rightView(root->left, level+1, ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rightView(root, 0, ans);
        return ans;
    }
};
