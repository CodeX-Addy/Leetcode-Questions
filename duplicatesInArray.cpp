#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR all array elements
    for(int i = 0; i<arr.size(); i++ ) {
        ans = ans^arr[i];
    }
    
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
        ans = ans^i;
    }
    return ans;
}


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
