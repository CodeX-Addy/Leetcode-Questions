
class Solution {
public:

    TreeNode* createBSTFromSortedArray(vector<int>& nums, int s, int e){
        //base case --> rukna kb h
        if(s > e)
            return nullptr;
        
        int mid = (s + e)/2;
        int element = nums[mid];
        TreeNode* root = new TreeNode(element);
        root->left = createBSTFromSortedArray(nums, s, mid - 1);
        root->right = createBSTFromSortedArray(nums, mid + 1, e);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBSTFromSortedArray(nums, 0, nums.size()-1);
    }
};
