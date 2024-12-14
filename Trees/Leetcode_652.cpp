
class Solution {
public:

    vector<TreeNode*> ans;
    unordered_map<string, int>mp;

    string preorder(TreeNode* root){
        //base 
        if(!root) return "N";

        string curr = to_string(root->val);
        string l = preorder(root->left);
        string r = preorder(root->right);

        string s = curr + "," + l + "," + r;
        if(mp.find(s) != mp.end()){
            if(mp[s] == 1)
                ans.push_back(root);
            mp[s]++;
        }
        else{
            mp[s] = 1;
        }
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        preorder(root);
        return ans;
    }
};
