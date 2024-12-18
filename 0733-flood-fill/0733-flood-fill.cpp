class Solution {
public:
void dfs(int i,int j,vector<vector<int>>& image,int color,int inicolor){
    int n=image.size();
    int m=image[0].size();
    if(i<0 or j<0)return;
    if(i>=n or j>=m)return;
    if(image[i][j]!=inicolor)return;
    image[i][j]=color;
    dfs(i-1,j,image,color,inicolor);
    dfs(i,j-1,image,color,inicolor);
    dfs(i+1,j,image,color,inicolor);
    dfs(i,j+1,image,color,inicolor);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        if(inicolor!=color)
        dfs(sr,sc,image,color,inicolor);
       
        return image;
        
    }
};