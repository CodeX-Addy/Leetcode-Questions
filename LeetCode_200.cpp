class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() ||
        grid[i][j]=='0' || grid[i][j]=='x'){
            return;
        }

        grid[i][j] = 'x';
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        int ans = 0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]!='0' && grid[i][j]!='x'){
                    dfs(grid, i, j);
                    ++ans;
                }
            }
        }
        return ans;
    }
};
