class Solution {
public:
bool isvalid(vector<vector<int>>& image, int sr,int sc, int row,int col, int ini_color)
{
    if (sr>=0 && sr<row && sc >=0 && sc <col && image[sr][sc]==ini_color ) return true ;


    return false ;

}
void dfs(vector<vector<int>>& image, int sr, int sc, int row,int col, int fill,int color)
{
    image[sr][sc]= color;

    if(isvalid(image,sr+1,sc,row,col,fill))
    {
        dfs(image,sr+1,sc, row,col,fill,color);
    }

       if(isvalid(image,sr-1,sc,row,col,fill))
    {
        dfs(image,sr-1,sc, row,col,fill,color);
    }

       if(isvalid(image,sr,sc-1,row,col,fill))
    {
        dfs(image,sr,sc-1, row,col,fill,color);
    }

       if(isvalid(image,sr,sc+1,row,col,fill))
    {
        dfs(image,sr,sc+1, row,col,fill,color);
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n = image.size();
        int m = image[0].size();

        int ini_color = image[sr][sc];

        if (ini_color == color) return image;
        

        dfs(image, sr,sc, n,m,ini_color,color);

        return image ;

        
    }
};