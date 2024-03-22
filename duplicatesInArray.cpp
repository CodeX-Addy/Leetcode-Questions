#include<vector>
using namespace std;

//Using hashmap approach
    int findDuplicate(vector<int>& nums) {
        //Hashmap
        int ans = 0;
        map<int,int> mp;
        for(int i=0; i<nums.size(); ++i){
            mp[nums[i]]++;
        }

        for(auto i : mp){
            if(i.second > 1)
                ans = i.first;
        }
        return ans;
    }

//Positioning approach
    while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];