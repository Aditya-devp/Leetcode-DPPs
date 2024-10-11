class Solution {
    private:
    void dfs(int row,int col,vector<vector<char>>& grid){
        if(row<0 or col<0 or row>=grid.size() or col>=grid[0].size())return;
        if(grid[row][col]=='0')return;

            grid[row][col]='0';
            dfs(row+1,col ,grid);
             dfs(row-1,col ,grid);
              dfs(row,col+1 ,grid);
               dfs(row,col-1 ,grid);
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int count=0;
        for(int i=0;i<grid.size();i++){
        
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
        
    }
};