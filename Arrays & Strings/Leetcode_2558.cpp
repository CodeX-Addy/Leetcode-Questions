class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
            long long ans = 0;
            while(k--){
                sort(gifts.begin(), gifts.end());
                int n = gifts[gifts.size()-1];
                int sq = floor(sqrt(n));
                gifts[gifts.size() - 1] = sq;
            }

            for(auto i:gifts){
                ans += i;
            }
            return ans;
    }
};
