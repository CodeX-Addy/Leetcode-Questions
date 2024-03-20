class Solution {
public:
    
    //Brute force
    class Solution {
        public:
         int bruteForce(vector<int>& nums){
                for(int i=0; i<nums.size(); ++i){
                        int lsum = 0;
                        int rsum = 0;
                        for(int j=0; j<i; ++j){
                            lsum += nums[j];
                        }
                        for(int j=i+1; j<nums.size(); ++j){
                            rsum += nums[j];
                        }
                        if(lsum == rsum)
                            return i;
                    }
                
                return -1;
            }
            int pivotIndex(vector<int>& nums) {
            int ans= bruteForce(nums);
            return ans;
        }
};
    int pivotIndex(vector<int>& nums) {
        // Initialize rightSum to store the sum of all the numbers strictly to the index's right
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        // Initialize leftSum to store the sum of all the numbers strictly to the index's left
        int leftSum = 0;
        // Traverse all elements through the loop...
        for (int idx = 0; idx < nums.size(); idx++) {
            // subtract current elements with from rightSum...
            rightSum -= nums[idx];
            // If the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right
            if (leftSum == rightSum)
                return idx;     // Return the pivot index...
            // add current elements with leftSum...
            leftSum += nums[idx];
        }
        return -1;      // If there is no index that satisfies the conditions in the problem statement
    }
};
