class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        vis[sr][sc]=1;
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            if(row+1<n && image[row+1][col]==image[row][col] && vis[row+1][col]==0)
            {
                q.push({row+1,col});
               
                vis[row+1][col]=1;
            }
              if(col+1<m && image[row][col+1]==image[row][col] && vis[row][col+1]==0)
            {
                q.push({row,col+1});
     
                vis[row][col+1]=1;
            }  if(row-1>=0 && image[row-1][col]==image[row][col] && vis[row-1][col]==0)
            {
                q.push({row-1,col});
                
                vis[row-1][col]=1;
            }  if(col-1>=0 && image[row][col-1]==image[row][col] && vis[row][col-1]==0)
            {
                q.push({row,col-1});
              
                vis[row][col-1]=1;
            }
            image[row][col]=color;
        }
        return image;
    }
};