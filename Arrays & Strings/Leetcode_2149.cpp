class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg, result;
        for(auto i : nums){
            if(i >= 0)
                pos.push_back(i);
            else
                neg.push_back(i);
        }

        int i=0,j=0;
        while(i<pos.size() && j<neg.size()){
            result.push_back(pos[i++]);
            result.push_back(neg[j++]);
        }
        return result;
    }
};
