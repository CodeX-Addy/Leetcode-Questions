class Solution {
public:

    int solve(vector<int>& coins, int amount, vector<int>& dp) {
        //base case
        if(amount == 0) {
            return 0;
        }
        //already ans exist
        if(dp[amount] != -1) {
            return dp[amount];
        }
        //recursive relation
        int mini = INT_MAX;
        for(int i=0; i<coins.size(); i++) {
            if(amount - coins[i] >= 0) {
                int recursionKaAns = solve(coins, amount - coins[i], dp);
                if(recursionKaAns != INT_MAX) {
                    int ans = 1 + recursionKaAns;
                    mini  = min(mini, ans);
                }
            }
        }
        dp[amount] = mini;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = amount;
        vector<int>dp(n+1, -1);
        int ans = solve(coins, amount,dp);
        if(ans == INT_MAX)
            return -1;
        else {
            return ans;
        }
    }
};
