class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;

        for(auto n : nums1){
            mp[n]++;
        }

        for(auto n : nums2){
            if(mp.find(n)!=mp.end()){
                ans.push_back(n);
                mp.erase(n);
            }
        }
        return ans;
    }
};
