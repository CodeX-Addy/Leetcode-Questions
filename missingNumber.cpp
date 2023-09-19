class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = -1;
        int n= nums.size();
        int sum=0;
        int totalSum = 0;
        for(int i=0; i<nums.size(); ++i){
              sum+=nums[i];
        }
        
        totalSum = n*(n+1)/2;

        ans = totalSum - sum;
        return ans;
        }
};
