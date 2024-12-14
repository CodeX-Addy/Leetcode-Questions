class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int> trustCount(n + 1, 0);  // Index 0 is not used
       vector<int> trustedCount(n + 1, 0);

    // Count trust relationships
    for (const auto& relationship : trust) {
        int a = relationship[0];
        int b = relationship[1];
        trustCount[a]--;   // Person a trusts someone, decrement trustCount
        trustedCount[b]++; // Person b is trusted, increment trustedCount
    }

    // Check for a person who is trusted by everyone and trusts nobody
    for (int i = 1; i <= n; ++i) {
        if (trustCount[i] == 0 && trustedCount[i] == n - 1) {
            return i;  // Found the judge
        }
    }

    return -1;  // No judge found
    }
};
