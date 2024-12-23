class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>first;
        vector<int>second;

        vector<int>ans;
        int size = nums.size();
        int mid = size/2;
        for(int i=0; i<mid; ++i){
            first.push_back(nums[i]);
        }
        for(int i=mid; i<size; ++i){
            second.push_back(nums[i]);
        }
        int i=0, j=0;
        while(i<first.size() && j<second.size()){
            ans.push_back(first[i++]);
            ans.push_back(second[j++]);
        }
        return ans;
    }
};
