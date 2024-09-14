class Solution {
public:

    void sumtoleaf(TreeNode* root, int &ans, int currSum){
        //base case
        if(!(root->left) && !(root->right)){
            ans += currSum*10 + root->val;
            return;
        }
            
        currSum = currSum*10 + root->val;
        if(root->left) sumtoleaf(root->left, ans, currSum);
        if(root->right) sumtoleaf(root->right, ans, currSum);
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        int currSum = 0;
        sumtoleaf(root, ans, currSum);
        return ans;
    }
};
