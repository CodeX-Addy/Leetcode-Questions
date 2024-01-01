class Solution {
  public:
    int sum(Node* root){
        if(!root) return 0;
        //leaf node
        if(!root->left && !root->right){
            int temp = root->data;
            root->data = 0;
            return temp;
        }
        int temp = root->data;
        int lsum = sum(root->left);
        int rsum = sum(root->right);
        root->data = lsum + rsum;
        return temp + root->data;
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        sum(node);
    }
};
