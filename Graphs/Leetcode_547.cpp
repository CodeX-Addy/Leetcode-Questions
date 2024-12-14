class Solution {
public:
   
    void dfsTraversal(vector<vector<int>>& isConnected, int curr, unordered_map<int,bool> &vis, int n){
        for(int i=0; i<n; ++i){
            if(isConnected[curr][i] && !vis[i]){
                vis[i] = true;
                dfsTraversal(isConnected, i, vis, n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int cnt = 0;
        unordered_map<int,bool> vis;
        for(int i=0; i<n; ++i){
            if(!vis[i]){
                ++cnt;
                dfsTraversal(isConnected, i, vis,n);
            }
        }
        return cnt;
    }
};
