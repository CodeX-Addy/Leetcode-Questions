class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]+nums[j])==target)
                {
                        ans.push_back(i);
                        ans.push_back(j);
                        break;
                }
            }
            
        }
        return ans;
    }
};

//Optimized approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int s=0, e=nums.size()-1;
        while(s<e && e>0){
            int currSum = nums[s] + nums[e];
            if(currSum == target){
                ans.push_back(s);
                ans.push_back(e);
                break;
            }
            else
                ++s;
            if(s==e){
                s=0;
                --e;
            }
      }
      return ans;
    }
};
