class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int i, int j, int health, vector<vector<bool>>& visited,vector<vector<vector<int>>>&dp) {
        int m = grid.size(), n = grid[0].size();
        
       
        if (i < 0 || i >= m || j < 0 || j >= n || health <= 0 || visited[i][j])
            return false;
        if (grid[i][j] == 1) {
            health--;
        }
       
        if (i == m - 1 && j == n - 1) 
            return health >= 1;
            if (dp[i][j][health] != -1)
            return dp[i][j][health];
        
     
        visited[i][j] = true;
        
      
        
        
        
        bool foundPath = dfs(grid, i + 1, j, health, visited,dp) || 
                         dfs(grid, i - 1, j, health, visited,dp) || 
                         dfs(grid, i, j + 1, health, visited,dp) || 
                         dfs(grid, i, j - 1, health, visited,dp);   
        
        
        visited[i][j] = false;
        
        return dp[i][j][health]= foundPath;
    }
    
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<vector<vector<int>>>dp(m, vector<vector<int>>(n, vector<int>(health + 1, -1)));
        return dfs(grid, 0, 0, health, visited,dp);
    }
};
