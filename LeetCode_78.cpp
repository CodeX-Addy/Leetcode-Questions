class Solution {
public:
    
    void sub_sets(vector<vector<int>>&ans, vector<int>&output, int index, vector<int>nums){
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        //Include
        output.push_back(nums[index]);
        sub_sets(ans, output, index+1, nums);

        //Exclude
        output.pop_back();
        sub_sets(ans, output, index+1, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>output;
        int index = 0;
        sub_sets(ans, output, index, nums);
        return ans;
    }
};
