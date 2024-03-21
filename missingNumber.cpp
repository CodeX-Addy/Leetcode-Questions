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

    //Sorting approach
    int sortingMethod(vector<int>& nums){
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == i)
                continue;
            else 
                return i;
        }
        return nums.size();
    }
};
